#include<stdio.h>

int main(void){

int i,t,L,W,H;

scanf("%d",&t);

i=1;

while(i<=t){

        scanf("%d %d %d",&L,&W,&H);

        if(L<=20 && W<=20 && H<=20)
                   printf("Case %d: good\n",i);
       else printf("Case %d: bad\n",i);

       i++;
    }

return 0;

}

