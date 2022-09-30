#include<stdio.h>
void main()
{
    int a,last,num=0,onum;
    printf("enter a number");
    scanf("%d",&a);
    onum=a;
    
    while(a!=0)
    {
        last=a%10;
        num=num*10+last;
        a=a/10;
    }
    if(num==onum)
    {
        printf("its paldrome");
    }
    else
    printf("not palandrome");
    
}