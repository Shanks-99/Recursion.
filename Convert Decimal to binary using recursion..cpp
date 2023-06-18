// Write a program to convert decimal to binary using recursion.

#include <stdio.h>
void convertDecimalToBinary(int decimal) 
{
    if (decimal > 0) 
	{
        convertDecimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() 
{
    int numDecimal;

    printf("Enter a decimal number: ");
    scanf("%d", &numDecimal);

    printf("Binary representation: ");
    if (numDecimal == 0) {
        printf("0");
    } else {
        convertDecimalToBinary(numDecimal);
    }
    printf("\n");

    return 0;
}
