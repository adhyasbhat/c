#include <stdio.h>
void main()
{
    int i=1;    
    do
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
        i++;
    }
    while( i<=10);
    
}