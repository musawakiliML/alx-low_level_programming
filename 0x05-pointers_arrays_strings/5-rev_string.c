#include "main.h"

/**
 * rev_string - function entry point
 * Description - a function that reverses a string.
 * @s: input
 */

void rev_string(char *s)
{
	int len, a;
	char c;

	a = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (; a < len--; )
	{
		c = s[a];
		s[a++] = s[len];
		s[len] = c;
	}
}
