#include "main.h"

/**
 * main - a function that prints 10 times the alphabet, 
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int b;

	for (n = 0; n <= 9; n++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}

}
