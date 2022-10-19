#include <stdio.h>
#include "main.h"

/**
 * _abs - function entry point.
 * Description - function that computes the absolute value of an integer.
 * @n: Input.
 * Return: absolute value of n.
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
