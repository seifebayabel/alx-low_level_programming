#include "main.h"

/**
 * _isupper - check a character is upper or not
 * @c: this is an input character
 * Return: if a character is upper return to 1, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
