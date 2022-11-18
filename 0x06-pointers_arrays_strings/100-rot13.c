#include "main.h"

/**
 * rot13 - function to convert to rot 13
 * @s: string input
 * Return: Converted String
 */

char *rot13(char *s)
{
	int c;
	int x;

	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	c = 0;

	while (s[c] != '\0')
	{
		x = 0;
		while (letters[x] != '\0')
		{
			if (s[c] == letters[x])
			{
				s[c] = rot13[x];
				break;
			}
			x++;
		}
		c++;
	}
	return (s);
}
