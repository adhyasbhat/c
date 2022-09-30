#include<stdio.h>
void main()
{
    int a,sum=0;
    printf("enter a number");
    scanf("%d",&a);

    for (int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }

    }
    
    if(sum==a)
    {
        printf("prefect");
    }
    else
    printf("not prefect");
}