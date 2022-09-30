#include <stdio.h>
void main()
{
    // int a=9;
    // int b=++a + ++a + ++a + ++a;
    int a=90;
    // a/=10;
    a+=(a+a);
    printf("%d",a);
}