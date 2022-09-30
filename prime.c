#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,count=0;
    printf("enter a num");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("not prime");
            exit(0);            
        }        
    }
    printf("prime");
}
