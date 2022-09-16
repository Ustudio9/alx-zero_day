#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * mul - a function that multiplies two values
 * @a: first input
 * @b: second input
 * Return: multiplication result of the 2inputs
 * */
int mul(int a, int b)
{
	return (a * b);
}

int main()
{
	int a, b, prod;

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);

	prod = mul(a, b);

	printf("Product of %d and %d is: %d", a, b, prod);

	return 0;
}
