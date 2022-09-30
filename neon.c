#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,sum=0;
    printf("enter a number");
    scanf("%d",&a);

    int squ=a*a;
    int lastd;
    while(squ!=0)
    {
        lastd=squ%10;
       sum=sum+lastd;
        squ=squ/10;
       
    }
    if(a==sum)
       {
           printf("neon number\n");
           
       }
       else
        printf("not neno");
}