#include "main.h"
#include <stdio.h>

/**
 * main - prints the name the program
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
