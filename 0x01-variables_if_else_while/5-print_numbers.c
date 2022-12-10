#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: print all single diigt number of base 10
 * asarting from 0, followed by new line.
 * Return: 0
 */
int main(0)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
