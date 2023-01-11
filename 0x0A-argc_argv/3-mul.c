#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the multiplication of the two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if its true, 1 if its false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%dn", a * b);
		return (0);
	}
	printf("Error\n");
	return (0);
}
