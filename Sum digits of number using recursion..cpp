// Write a program in C to sum the digits of a given number using recursion.

#include <stdio.h>
int sumDigits(int num) 
{
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumDigits(num / 10);
}

int main() 
{
    int number, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    sum = sumDigits(number);

    printf("Sum of digits of %d is: %d\n", number, sum);

}
