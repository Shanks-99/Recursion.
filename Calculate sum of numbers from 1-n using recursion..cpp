// Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include <stdio.h>
int calculateSum(int num) 
{
    if (num == 0)
        return 0;

    return num + calculateSum(num - 1);
}

int main() {
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = calculateSum(n);

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);
}
