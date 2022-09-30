#include <stdio.h>

void main()
{
    int a,b,c;
     
    printf("enter two numbers");
    scanf("%d%d",&a,&b);

    printf("Choose \n 1 to add\n 2 to sub\n 3 to mul\n 4 to div\n ");
    scanf("%d",&c);

    switch(c)
    {
        case 1: int sum =a+b;
        printf("%d",sum);
        break;

         case 2: int diff =a-b;
        printf("%d",diff);
        break;

         case 3: int mul =a*b;
        printf("%d",mul);
        break;

         case 4: int div =a/b;
        printf("%d",div);
        break;

      default: break;
    }
}