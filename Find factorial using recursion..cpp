// Write a program to find the factorial of a number.

#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Factorial is not defined for negative numbers.\n");
	}
	else 
	{
		int fact=factorial(n);
		printf("The factorial of %d is:%d ",n,factorial);
	}
}
