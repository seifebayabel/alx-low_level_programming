#include "main.h"

/**
 * factorial - returns the factorial a given number
 * @n: The number to the factorial
 * Return: its value
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
