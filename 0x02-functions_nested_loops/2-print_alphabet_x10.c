#include "main.h"

/**
 * print _alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char i;

	for (ten = 0; ten <= 9; ten++)
	{
		for (i = 0; i <= 'a'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
