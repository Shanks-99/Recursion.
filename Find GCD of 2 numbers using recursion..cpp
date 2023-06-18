// Write a program in C to find GCD of two numbers using recursion

#include <stdio.h>
int calculateGCD(int a, int b) 
{
    if (b == 0)
        return a;
    else
        return calculateGCD(b, a % b);
}

int main() 
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = calculateGCD(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, result);
}
