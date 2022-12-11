#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main prints all combination of dingle digits
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
