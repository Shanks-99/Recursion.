// Write a program in C to check a number is a prime number or not using recursion.

#include <stdio.h>
int isPrime(int num, int divisor) 
{
    if (divisor == 1)
        return 1;
    else
	{
        if (num % divisor == 0)
            return 0;
        else
            return isPrime(num, divisor - 1);
    }
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2) 
	{
        printf("Not a prime number.\n");
    } 
	else 
	{
        int result = isPrime(number, number - 1);
        if (result == 1)
            printf("Prime number.\n");
        else
            printf("Not a prime number.\n");
    }
}
