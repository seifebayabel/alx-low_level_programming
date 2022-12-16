#include "main.h"

/**
 * _isdigit - functions that check a digit 0 t0 9
 * @c: a checker to check a digit
 * Return: if a digit is 0 to 9 return 1, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
