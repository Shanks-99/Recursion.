// Write a program in C to print first n numbers using recursion.

#include <stdio.h>
void printNumbers(int num) 
{
    if (num <= 0)
        return;
    printNumbers(num - 1);
    printf("%d ", num);
}

int main() 
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d numbers: ", n);
    printNumbers(n);
}








