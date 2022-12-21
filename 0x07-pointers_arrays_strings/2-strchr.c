#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: string input value
 * @c: character to find
 * Return: pointer to first occurence of c character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
