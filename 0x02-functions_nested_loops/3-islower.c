#include <stdio.h>
#include "main.h"

/**
 * _islower - function entry point.
 * Description - function that checks for lowercase character.
 * @c: Letter Input.
 * Return: 1 if c is lowercase, 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
