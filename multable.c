#include<stdio.h>
void main()
{
    int a,table;
    printf("enter a number");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        table=a*i;
        printf("%d * %d = %d\n",a,i,table);
    }
}