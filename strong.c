#include<stdio.h>

int factorial(int digit);
int factorial(int digit)
{
    int factorial = 1;
    for(int i = 1;i<=digit;i++)
    {
        factorial = factorial *1;
    }

    return factorial;
}

void main()
{
    int num;
    printf("Please enter the number : ");
    scanf("&d",&num);

    int lastDigit;
    int sum = 0;

    int result;
    int newNumber = num;

    while(num!=0)
    {
        lastDigit = num % 10;
        result = factorial(lastDigit);

        sum = sum + result;

        num = num / 10;
    }

    if(newNumber==sum)
    {
        printf("Number is strong number");
    }else{
        printf("Number is not a strong number");
    }
}