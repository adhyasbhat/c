#include <stdio.h>

void main()
{
    int a =20;
    int b = ++a + ++a +a;
    printf("%d\n",a);
    printf("%d\n",b);
}