#include <stdio.h>

void main()
{
    int choice;
    printf("~~~~~~~~Cafe~~~~~~~");
    printf("1:donut\n 2:cake \n 3:juice\n 4:chocolate\n 5:fries");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: printf("u r swetter tn donut");
            break;
    case 2: printf("baa guru cake tinanna");
            break;
    case 3: printf("juice kuditya");
            break;
    case 4: printf("chocolate contains choco");
            break;
    case 5: printf("finger licking good");
            break;
    default: printf("invalid choice");
    }
}