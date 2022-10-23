#include "main.h"

/**
 * _isupper - function entry point
 * Description - function that checks for uppercase character
 * @c: input character
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
