#include<stdio.h>

void main()
{
    int fact=1;
    int a,sum,last;
    printf("enter a number\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    while(fact!=0)
    {
        last=fact%10;
        sum=sum+last;
        fact=fact/10;
    }
    printf("%d\n",sum);
}