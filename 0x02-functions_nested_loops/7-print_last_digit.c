#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: last digit of a number
 * Return: 0 (Success)
 */
int print_last_digit(int n);
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (0);
}
