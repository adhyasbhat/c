#include<stdio.h>
void main()
{
    int a,last,sum,pro=1;
    printf("enter num");
    scanf("%d",&a);
    // while (a!=0)
    // {
    //     last=a%10;
    //     sum=sum+last;
    //     a=a/10;
    // }
    // printf("%d",sum);
    while(a!=0)
    {
        last=a%10;
        pro=pro*last;
        a=a/10;
    }
    printf("%d",pro);
}