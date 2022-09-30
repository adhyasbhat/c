#include<stdio.h>

void main()
{
    int a,sum=0,pro=1;
    printf("enter a number");
    scanf("%d",&a);

    for (int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
            pro=pro*i;
        }

    }
    
    if(sum==a && pro==a)
    {
        printf("spy");
    }
    else
    printf("not spy");
}