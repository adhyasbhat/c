#include<stdio.h>
void main()
{
    int a,sum;
    printf("enter a number\n");
    scanf("%d",&a);
        sum=0;
        int fact=1;
       
        for(int i=1;i<=a;i++)
        {
           fact=fact*i;
           sum=sum+fact;
        }
        
    printf("%d",sum);
}
