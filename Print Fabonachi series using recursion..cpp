// Write a program in C to Print Fibonacci Series using recursion.

#include <stdio.h>
int fibonacci(int num) 
{
    if (num <= 1)
        return num;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

void printFibonacciSeries(int count) 
{
    int i;
    printf("Fibonacci Series: ");
    for (i = 0; i < count; i++) 
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() 
{
    int numTerms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);

    if (numTerms < 0) 
	{
        printf("Error: The number of terms should be non-negative.\n");
    } 
	else 
	{
        printFibonacciSeries(numTerms);
    }
}
