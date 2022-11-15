#include "main.h"
/**
 * _strcat - a function concatenate two strings
 * @dest: char string
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	c = 0;

	for (; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
