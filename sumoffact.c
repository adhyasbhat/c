#include<stdio.h>

void main()
{
    int a,sum=0,last;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        int fact=1;
        last=a%10;
        for(int i=1;i<=last;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    a=a/10;
}
    printf("%d",sum);
}