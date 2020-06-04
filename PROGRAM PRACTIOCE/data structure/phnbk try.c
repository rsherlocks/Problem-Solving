#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sqlite3.h>

static char * const DB = "phbook.dat"; //database file name
static char * const SEARCH_CSV = "search_dump.csv"; //search csv dump file name
char *dbname ; // global datatabase name variable

//sqlite variables
sqlite3 *db;
char *zErrMsg = 0;
int rc;

//functions
void Usage(char *filename); //usage function
void MainMenu(); //main menu
void SearchMenu(); //search menu
char *formatInput(char *option); //format user input to 512 chars
char *trim(char *str); //remove white space from front and back of string
void removetillEOL( void ); //remove end of line from stdin
void AddMenu();  //add menu
void UpdateMenu(); //update menu
void DeleteMenu(); //delete menu
int do_search(int exp); //main search function
void repeat_check(char menu); //option for repeating
int run_query(char *sql, int exp); //function to run sql queries

//sqllite no print callback
static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
	printf("----------------------------\n");
	return 0;
}

//pint callback sqlite
static int OutCallback(void *file, int argc, char **argv, char **azColName){
	FILE *f = file ; //csv file pointer
	int i;
	const char *sep = "";
	char *data;

	for (i=1;i<argc;i++) {
         fprintf(f,"%s%s", sep, argv[i]);
         sep = ";";
     }
      fprintf(f,"\n");
     for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
	printf("----------------------------\n");
   return 0;
}

//Our main function.
    /**
     * Get the arguments from the command line
     * @param argc
     * @param argv
     * @return
     */
int main(int argc, char *argv[]) {

	FILE *fp; //file pointer
	char *sql;

    if (argc == 3 && (0 == strcmp(argv[1], "-f"))) {
        dbname = argv[2];
	   //read file and return error if file does not open
 	    if ((fp = fopen(dbname, "r")) == NULL) {
		perror("Database Error");
		return (-1);
	    }
	    //run program
	    MainMenu();
    }else if (argc > 3) {
        Usage(argv[0]);
        exit(1);
    } else if(argc == 1){
        dbname = DB;
	    //read file and return error if file does not open
 	    if ((fp = fopen(dbname, "r")) == NULL) {
	   /* Open database  and create a new one with tables */
		   rc = sqlite3_open(dbname, &db);
		   if( rc ){
		      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		      exit(1);
		   }else{
			   //create table in db
			   sql = "CREATE TABLE Contacts (id INTEGER PRIMARY KEY, FirstName TEXT, LastName TEXT, Phone TEXT, MobilePhone TEXT, Email TEXT, Address TEXT, City TEXT, Country TEXT);";

			   /* Execute SQL statement */
			   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
			   if( rc != SQLITE_OK ){
			   fprintf(stderr, "SQL error: %s\n", zErrMsg);
			      sqlite3_free(zErrMsg);
			   }else{
			      fprintf(stdout, "\nNew database and table created successfully\n");
				sleep(3);  //wait for 3 seconds before continuing
			}
			   sqlite3_close(db);
		   }
	    }

	    //run program
	    MainMenu();
    }else{
		Usage(argv[0]);
        exit(1);
    }

//Close the file if still open.
    if (fp) {
        fclose(fp);
    }
    return (0);
}

int run_query(char *sql, int exp)
{
	FILE *f;
	int ret;

	/* Open database */
   rc = sqlite3_open(dbname, &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }

   printf("\n=============RESULTS===============\n\n");

   /* Execute SQL statement */
   if (exp == 1){
	   //export if file is selected
	   if ((f = fopen(SEARCH_CSV, "w")) == NULL) {
		perror("CSV export Error");
        }
	fprintf(f,"Name;Surname;Phone;Mobilephone;email;profession,Address;City;Country\n");
	rc = sqlite3_exec(db, sql, OutCallback, f, &zErrMsg); //with file
   }else{
	 rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);	   //without file
   }

   if( rc != SQLITE_OK ){
     fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
	   ret= 1;
   }else{
	   int retval;
	   sqlite3_stmt* stmt = NULL;
	   if(exp !=2){
	   //chech if row count for select
	  retval = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
		   retval = sqlite3_step(stmt);
	   }
	   if (retval == SQLITE_DONE && exp != 2) {
		   printf("Cannot find what you searched for in the database\n\n");
		   sqlite3_finalize(stmt);
		   ret= 1;
	   }else{
		   fprintf(stdout, "\nOperation done successfully\n\n");
		   sqlite3_finalize(stmt);
		  ret =0;
	   }

   }
   sqlite3_close(db);
  if (exp == 1 && ret !=1){
	       printf("\nRecord exported to '%s' successfully\n\n",SEARCH_CSV);
   if(f)
	   fclose(f);
   }
   return ret;
}

void repeat_check(char menu)
{
	int valid;
	char ch;

	//check repeat
	valid = 0;
	while( valid == 0 ) {
		printf("Do you want to start again (Y/N)?: ");
		scanf(" %c", &ch );
		ch = toupper( ch );
		if((ch == 'Y') || (ch == 'N') )
			valid = 1;
		else
			printf("Error: Invalid choice\n");
		removetillEOL();
	}
	if( ch == 'Y' )
	{
		if( menu == 's' ){
			SearchMenu();
		}else if(menu == 'a' )
		{
			AddMenu();
		}else if(menu == 'd' )
		{
			DeleteMenu();
		}else if(menu == 'u' )
		{
			UpdateMenu();
		}else{
			MainMenu();
		}
	}
	else
		MainMenu();
}
//usage part
void Usage(char *filename) {
    printf("Usage: %s -f <database_filename> or %s\n", filename, filename);
}

//main menu
void MainMenu()
{
	int optn; // option value
	int valid; //check if option is valid

	system("clear");
	printf("#######################################\n");
	printf("####### Phone Book Application ########\n");
	printf("#######################################\n\n");
	valid = 0;
	while( valid == 0 )
	{
		printf("Select an option to begin:\n");
		printf("--------------------------\n");
		printf(" 1) Search\n");
		printf(" 2) Add\n");
		printf(" 3) Update\n");
		printf(" 4) Delete\n");
		printf(" 5) Quit\n\n");
		printf("Choose an option: ");

		if(scanf("%d", &optn) == 1)
		{
			if(optn > 0 && optn < 6)
			{
				valid = 1;
			}else{
				printf("Error: Invalid option selected, please try again\n\n");
			}
			removetillEOL();
		}else{
			printf("Error: Please input a number only\n\n");
			removetillEOL();
		}

	}
	//start the operations
	if(optn == 1)
	{
		SearchMenu();
	}else if (optn == 2)
	{
		AddMenu();
	}else if (optn == 3)
	{
		UpdateMenu();
	}else if (optn == 4)
	{
		DeleteMenu();
	}else{
		exit(1);
	}

}

//search menu
void SearchMenu()
{
	int optn; // option value
	int valid; //check if option is valid
	int allow_export; //allow csv file export
	char ch; //repeat option value

	system("clear");
	printf("\tSearch PhoneBook\n");
	printf("================================\n\n");
	valid = 0;
	while( valid == 0 )
	{
		printf("Select a search option:\n");
		printf("-----------------------\n");
		printf(" 1) Export search result to csv ( %s )\n",SEARCH_CSV);
		printf(" 2) Do not export search result\n");
		printf(" 3) Back\n\n");
		printf("Choose an option: ");

		if(scanf("%d", &optn) == 1)
		{
			if(optn > 0 && optn < 4)
			{
				valid = 1;
			}else{
				printf("Error: Invalid option selected, please try again\n\n");
			}
			removetillEOL();
		}else{
			printf("Error: Please input a number only\n\n");
			removetillEOL();
		}

	}
	//start the operations
	if(optn == 1)
	{
		allow_export = 1;
		do_search(allow_export);
		repeat_check('s');
	}
	else if (optn == 2)
	{
		allow_export = 0;
		do_search(allow_export);
		repeat_check('s');
	}else
	{
		MainMenu();
	}


}

//the main search function @exp = allow exports?
int do_search(int exp)
{
	int optn; // option value
	int valid; //check if option is valid
	char *sql;
	char statement[256];
	char *response = malloc(300);

	system("clear");
	printf("\tSearch a record\n");
	printf("================================\n\n");
	valid = 0;
	while( valid == 0 )
	{
		printf("Select a field to search:\n");
		printf("---------------------------\n");
		printf(" 1) First Name\n");
		printf(" 2) Last Name\n");
		printf(" 3) Phone\n");
		printf(" 4) Mobile Phone\n");
		printf(" 5) Email\n");
		printf(" 6) City\n");
		printf(" 7) Country\n");
		printf(" --------------------------\n");
		printf(" 8) Menu\n");
		printf(" 9) Quit\n\n");
		printf("Choose an option: ");

		if(scanf("%d", &optn) == 1)
		{
			if(optn > 0 && optn < 10)
			{
				valid = 1;
			}else{
				printf("Error: Invalid option selected, please try again\n\n");
			}
			removetillEOL();
		}else{
			printf("Error: Please input a number only\n\n");
			removetillEOL();
		}

	}
	//start the operations
	if(optn == 1)
	{
		//memset(response, 0, sizeof response); //empty the response array
		printf("Enter the First Name of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE FirstName LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}
	else if (optn == 2)
	{
		printf("Enter the Last Name of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE LastName LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}else if (optn == 3)
	{
		printf("Enter the Phone of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE Phone LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}else if (optn == 4)
	{
		printf("Enter the Mobile Phone of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE MobilePhone LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}else if (optn == 5)
	{
		printf("Enter the Email of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE Email LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}else if (optn == 6)
	{
		printf("Enter the City of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE City LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}else if (optn == 7)
	{
		printf("Enter the Country of the record to search for: ");
		scanf("%[^\n]s", response);
		response = formatInput(response);
		snprintf(statement,sizeof statement, "SELECT * FROM Contacts WHERE Country LIKE '%%%s%%' ",response);
		sql = statement;
		//printf("%s\n",sql);
		return(run_query(sql,exp));
	}else if (optn == 8)
	{
		MainMenu();
	}else{
		exit(1);
	}
	memset(response, 0, sizeof response);
}

//add menu
void AddMenu()
{
	char *sql;
	char statement[512];
	char *fname = malloc(50);
	char *lname = malloc(50);
	char *phone= malloc(20);
	char *mobile= malloc(20);
	char *email= malloc(50);
	char *address= malloc(200);
	char *city= malloc(50);
	char *country= malloc(50);

	printf("Enter the First Name: ");
	scanf("%[^\n]s", fname);
	fname = formatInput(fname);
	removetillEOL();

	printf("Enter the Last Name: ");
	scanf("%[^\n]s", lname);
	lname = formatInput(lname);
	removetillEOL();

	printf("Enter the Phone: ");
	scanf("%[^\n]s", phone);
	phone = formatInput(phone);
	removetillEOL();

	printf("Enter the Mobile Phone: ");
	scanf("%[^\n]s", mobile);
	mobile = formatInput(mobile);
	removetillEOL();

	printf("Enter the Email: ");
	scanf("%[^\n]s", email);
	email = formatInput(email);
	removetillEOL();

	printf("Enter the Address: ");
	scanf("%[^\n]s", address);
	address = formatInput(address);
	removetillEOL();

	printf("Enter the City: ");
	scanf("%[^\n]s", city);
	city = formatInput(city);
	removetillEOL();

	printf("Enter the Country: ");
	scanf("%[^\n]s", country);
	country = formatInput(country);
	removetillEOL();

	//run SQL Statements
	snprintf(statement,sizeof statement, "INSERT INTO Contacts (FirstName,LastName,Phone,MobilePhone,Email,Address,City,Country) VALUES ('%s','%s','%s','%s','%s','%s','%s','%s')",fname,lname,phone,mobile,email,address,city,country);
	sql = statement;
	//printf("%s\n",sql);
	run_query(sql,2);

	memset(fname, 0, sizeof fname); //empty the response arrays
	memset(lname, 0, sizeof lname);
	memset(phone, 0, sizeof phone);
	memset(mobile, 0, sizeof mobile);
	memset(email, 0, sizeof email);
	memset(address, 0, sizeof address);
	memset(city, 0, sizeof city);
	memset(country, 0, sizeof country);

	//ask if user wants to add again
	repeat_check('a');
}

//update menu
void UpdateMenu()
{
	int valid;
	int id, good;
	char *sql;
	char statement[512];
	char values_cut[512]; //to cut the values
	char *fname = malloc(50);
	char *lname = malloc(50);
	char *phone= malloc(20);
	char *mobile= malloc(20);
	char *email= malloc(50);
	char *address= malloc(200);
	char *city= malloc(50);
	char *country= malloc(50);

	char fname_out[50];
	char lname_out[50];
	char phone_out[20];
	char mobile_out[20];
	char email_out[50];
	char address_out[200];
	char city_out[50];
	char country_out[50];


	//search first
	if(do_search(0) == 0){

	valid = 0;
	while( valid == 0 )
	{
		printf("Enter the (id) of the record you want to update: ");

		if(scanf("%d", &id) == 1)
			{
				if(id > 0 )
				{
					valid = 1;

					printf("\nUpdate the values, press enter if you do not want to change a field\n");
					printf("---------------------------------------------------------------------\n");
					removetillEOL();

					//get the update values
					printf("Enter the First Name: ");
					if((scanf("%[^\n]s", fname) != 0)){
						fname = formatInput(fname);
						snprintf(fname_out, sizeof fname_out, "FirstName='%s',",fname);
					}else{
						snprintf(fname_out,sizeof fname_out, "");
					}
					fname = fname_out;
					removetillEOL();

					printf("Enter the Last Name: ");
					if((scanf("%[^\n]s", lname)!=0)){
						lname = formatInput(lname);
						snprintf(lname_out,sizeof lname_out, "LastName='%s',",lname);
					}else{
						snprintf(lname_out,sizeof lname_out, "");
					}
					lname=lname_out;
					removetillEOL();

					printf("Enter the Phone: ");
					if((scanf("%[^\n]s", phone)!=0)){
						phone = formatInput(phone);
						snprintf(phone_out,sizeof phone_out, "Phone='%s',",phone);
					}else{
						snprintf(phone_out,sizeof phone_out, "");
					}
					phone = phone_out;
					removetillEOL();

					printf("Enter the Mobile Phone: ");
					if((scanf("%[^\n]s", mobile)!=0)){
						mobile = formatInput(mobile);
						snprintf(mobile_out,sizeof mobile_out, "MobilePhone='%s',",mobile);
					}else{
						snprintf(mobile_out,sizeof mobile_out, "");
					}
					mobile=mobile_out;
					removetillEOL();

					printf("Enter the Email: ");
					if((scanf("%[^\n]s", email)!=0)){
						email = formatInput(email);
						snprintf(email_out,sizeof email_out, "Email='%s',",email);
					}else{
						snprintf(email_out,sizeof email_out, "");
					}
					email = email_out;
					removetillEOL();

					printf("Enter the Address: ");
					if((scanf("%[^\n]s", address)!=0)){
						address = formatInput(address);
						snprintf(address_out,sizeof address_out, "Address='%s',",address);
					}else{
						snprintf(address_out,sizeof address_out, "");
					}
					address = address_out;
					removetillEOL();

					printf("Enter the City: ");
					if((scanf("%[^\n]s", city)!=0)){
						city = formatInput(city);
						snprintf(city_out,sizeof city_out, "City='%s',",city);
					}else{
						snprintf(city_out,sizeof city_out, "");
					}
					city=city_out;
					removetillEOL();

					printf("Enter the Country: ");
					if((scanf("%[^\n]s", country)!=0)){
						country = formatInput(country);
						snprintf(country_out,sizeof country_out, "Country='%s',",country);
					}else{
						snprintf(country_out,sizeof country_out, "");
					}
					country=country_out;
					removetillEOL();

					//remove the last comma from the query
					snprintf(values_cut,sizeof values_cut, "%s%s%s%s%s%s%s%s",fname,lname,phone,mobile,email,address,city,country);

					int i;
					for (i = strlen(values_cut); i > 0; i--) {
						if (values_cut[i] == ',') {
						    //replace the comma sign
						    values_cut[i] = ' ';
							break;
						}
					}

					//run SQL Statements
					snprintf(statement,sizeof statement, "UPDATE Contacts SET %s WHERE id=%d",values_cut,id);
					sql = statement;
					//printf("%s\n",sql);
					run_query(sql,2);

					//display the updated result
					snprintf(statement,sizeof statement,"SELECT * FROM Contacts WHERE id=%d",id);
					sql = statement;
					run_query(sql,2);

					memset(fname, 0, sizeof fname); //empty the response arrays
					memset(lname, 0, sizeof lname);
					memset(phone, 0, sizeof phone);
					memset(mobile, 0, sizeof mobile);
					memset(email, 0, sizeof email);
					memset(address, 0, sizeof address);
					memset(city, 0, sizeof city);
					memset(country, 0, sizeof country);

				}else{
					printf("Error: Invalid (id) selected, please try again\n\n");
				}
				removetillEOL();
			}else{
				printf("Error: Please input a number only\n\n");
				removetillEOL();
			}
	}
}
	repeat_check('u');
}

//Delete menu
void DeleteMenu()
{
	int valid;
	int id, good;
	char *sql;
	char statement[512];

	//search first
	if(do_search(0)==0){

	valid = 0;
	while( valid == 0 )
	{
		printf("Enter the (id) of the record you want to delete: ");

		if(scanf("%d", &id) == 1)
			{
				if(id > 0 )
				{
					valid = 1;
					removetillEOL();
					//run SQL Statements
					snprintf(statement,sizeof statement, "DELETE from Contacts WHERE id=%d",id);
					sql = statement;
					//printf("%s\n",sql);
					run_query(sql,2);
					//printf("Record deleted successfully\n\n");
				}else{
					printf("Error: Invalid (id) selected, please try again\n\n");
				}
				removetillEOL();
			}else{
				printf("Error: Please input a number only\n\n");
				removetillEOL();
			}
	}
}
	repeat_check('d');
}

//format the input to 512 chrs max and remove white spaces
char *formatInput(char *option)
{
	char *result = malloc(512); //our character limit
	if(option == NULL)
	{
		return NULL;
	}

	if (strlen(option) > 512)
	{
		printf("Very long input, using the first 512 characters\n");
	}
	result = option; //copy the option value to result

	return trim(result); //trim the result before parsing it out
}

//remove the white spaces in front and back of character
char *trim(char *str)
{
  char *back;

  // Trim leading space
  while(isspace(*str))
  {
	  str++;
  }

  if(*str == 0)  // All char is a space
    return str;

  // Trim trailing space
  back = str + strlen(str) - 1;
  while(back > str && isspace(*back))
  {
	  back--;
  }

  // Write new null terminator
  *(back+1) = 0;

  return str;
}

// remove till \n from  the input to prevent using it for next input
void removetillEOL( void )
{
	char ch;
	ch = getchar();
	while( ch != '\n' )
		ch = getchar();
}
