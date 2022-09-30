#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    printf("enter a number and pow");
    scanf("%lf%lf",&a,&b);
    double root = sqrt(a);
    double square= pow(a,b);
    printf("%lf\n",root);
    printf("%lf\n",square);
    return 0;
}