#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: count number of arguments
 * @argv: store argument in an array
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])

{

printf("%d\n", argc - 1);

return (0);

}
