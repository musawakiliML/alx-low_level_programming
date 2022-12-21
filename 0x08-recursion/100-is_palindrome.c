#include "main.h"

/**
 * long_1 - Function entry point
 * @s: number
 *
 * Return: zero (0) or value.
 */

int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	else
	{
		return (0);
	}

}
/**
 * compare - Function entry point
 * @s: number
 * @l: lenght
 *
 * Return: zero(0) or value.
 */
int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Function entry point
 * @s: character
 *
 * Return: value.
 */
int is_palindrome(char *s)
{
	int l;

	l = long_1(s);
	return (compare(s, l));
}
