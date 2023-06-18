// Write a program in C to find the LCM of two numbers using recursion.

#include <stdio.h>
int findLCM(int a, int b, int Lcm);

int main() 
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int max = (num1 > num2) ? num1 : num2;
    result = findLCM(num1, num2, max);

    printf("LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}

int findLCM(int a, int b, int Lcm) 
{
    if (Lcm % a == 0 && Lcm % b == 0)
        return Lcm;
    else
        return findLCM(a, b, Lcm + 1);
}
