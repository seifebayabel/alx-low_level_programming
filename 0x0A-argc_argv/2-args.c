#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Alwyes 0 (success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
