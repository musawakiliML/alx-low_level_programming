#include "main.h"

/**
 * _pow_recursion - function entry point
 * @x: number
 * @y: number of power
 * Return: exponent value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
