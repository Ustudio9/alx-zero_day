#include <stdio.h>
#include "main.h"
/**
 * main - print sum of even valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, sum, next;

	j = 1;
	k = 2;
	sum = 0;

	sum = 0;
	{
		if (j % 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;

	}
	printf("%lu\n", sum);

	return (0);
}
