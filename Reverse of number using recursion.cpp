// Write a program to reverse a number using recursion.

#include <stdio.h>
int reverseNumber(int num) 
{
    static int reversedNum = 0;

    if (num == 0)
        return 0;

    reversedNum = reversedNum * 10 + (num % 10);
    reverseNumber(num / 10);

    return reversedNum;
}

int main() 
{
    int number, reversedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversedNumber = reverseNumber(number);

    printf("Reversed number: %d\n", reversedNumber);
}
