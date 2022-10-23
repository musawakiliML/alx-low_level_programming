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
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97  && c <= 122)
	{
		return (0);
	}
}
