#include <stdio.h>
void main()
{
    int p;
    printf("enter percentage");
    scanf("%d", &p);
    
    if(p>90 && p<=100)
    {
    printf("outstanding");
    }
    else if(p>80 && p<=90)
    {
    printf("excellent");
    }
    else if (p>70 && p<=80)
    {
    printf("very good");
    }
    else if (p>65 && p<=70)
    {
    printf("good");
    }
    else if (p>50 && p<65)
    {
    printf("average");
    }
    else
    {
    printf("below average");
    }
}