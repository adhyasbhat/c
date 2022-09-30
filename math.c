#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    double a;int b=3;
    printf("enter a number");
    scanf("%lf",&a);
    printf("the square root of a given num is %lf\n",sqrt(a));
    printf("the square of a given num is %lf\n",pow(a,2));
    printf("the absolute value of a given num is %lf\n",abs(b));
    printf("the floor number of a given num is %lf\n",floor(a));
    printf("the ceil number of a given num is %lf\n",ceil(a));
}