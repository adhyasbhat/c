#include<stdio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);

    for (int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
        }
    }
}