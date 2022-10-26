#include "main.h"

/**
 * _atoi - function entry point
 * Description - a function that convert a string to an integer
 * @s: char input
 * Return: converted string
 */

int _atoi(char *s)
{
	int len;
	int a, b;

	a = 1;
	b = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (*s == -1)
		{
			a = a * (-1);
		}
		else if (*s >= '0' && *s <= '9')
		{	
			if (b < 0)
			{
				b = (b * 10) + (s[len] - '0');
			}
			else
			{
				break;
			}
		}
	}
	
	if (a < 0)
	{
		b = (-b);
	}

	return (b);

}
