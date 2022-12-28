#include "main.h"
/**
 * print_rev - reverse
 * @x: string
 * Return: 0
 */
void print_rev(char *x)
{
	int longi = 0;
	int o;

	while (*x != '\n')
	{
		longi++;
		x++;
	}
	x--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*x);
		x--;
	}
	_putchar('\n');
}
