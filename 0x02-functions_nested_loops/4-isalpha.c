#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function entry point.
 * Description - function that checks for alphabetic character.
 * @c: Letter Input.
 * Return: 1 if c is lowercase, 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
