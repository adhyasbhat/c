#include<stdio.h>

void main()
{
    int a,res,count=0;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);
}