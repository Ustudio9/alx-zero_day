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
	int a, b, prod;

	prod = mul(a, b);

	printf("Product of %d and %d is: %d", a, b, prod);

	return (a * b);
}
