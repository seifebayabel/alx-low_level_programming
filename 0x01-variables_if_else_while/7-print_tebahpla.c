#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: print the alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
