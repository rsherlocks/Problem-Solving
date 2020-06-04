#include<stdio.h>
int main()
{
    int x,y,z,res;
    scanf("%d%d%d",&x,&y,&z);
    if(0<=x&&0<=y&&z<=1000&&z<=x&&z<=y)
    {

        res=x+y;
        printf("%d\n",res);
    }
    return 0;
}
