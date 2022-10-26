#include "main.h"

/**
 * *_strcpy - function entry point
 * Description - a function that copies the string pointed to by src
 * @dest: input
 * @src: input
 * Return: a pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	for (; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';

	return (dest);
}
