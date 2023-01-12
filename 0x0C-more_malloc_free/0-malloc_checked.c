#include "main.h"

/**
 * malloc_checked - array for prints a string
 * @b: number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
