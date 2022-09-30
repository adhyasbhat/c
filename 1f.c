#include<stdio.h>
// function without argument
// void main()
// {
//     printf("main begins");
//     c_developer();
//     printf("main ends");
// }
// void c_developer()
// {
//     int a=20, b=90;
//     int sum=a+b;
//     printf("%d",sum);
// }

// function with argument
// void main()
// {
//     c_developer(20,30);
// }
// int c_developer(int a, int b)
// {    
//     printf("%d",a+b);
// }

//function with return type with agruments
int c_developer(int a, int b);
void main()
{
    int a,b,res;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("main begins\n");
    res=c_developer(a,b);
    printf("%d\n",res);
    printf("main ends\n");

}

int c_developer(int a, int b)
{
    return a*b;
}