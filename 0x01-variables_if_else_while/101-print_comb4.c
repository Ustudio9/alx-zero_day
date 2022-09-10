#include <stdio.h>
/**
 * main - print tripple combo
 * Return: Always 0 (Success
 *
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 48;
	c = 48;

	while (a < 58; a++)
	{
		while (b < 58; b++)
		{
			while (c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 55 || b < 56 || c < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);
}
