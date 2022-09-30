#include<stdio.h>
void main()
{
    int a,last,num=0;
    printf("enter a number");
    scanf("%d",&a);
    
    while(a!=0)
    {
        last=a%10;
        num=num*10+last;
        a=a/10;
    }
    printf("%d",num);
    
}