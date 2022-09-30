#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,newa;
    printf("enter a number");
    scanf("%d",&a);
    newa=1+a;
    for(int i=2;i<newa;i++)
    {
        
        if(i*i==newa)
        {
            printf("its sunny num\n");
            exit(0);

        }
        
    }
    printf("not sunny");

}