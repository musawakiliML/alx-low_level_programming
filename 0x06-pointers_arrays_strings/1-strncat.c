#include "main.h"
/**
 * _strncat - function enrty point
 * Description - function that concatenate 2 strings
 * @dest: string input
 * @src: string input
 * @n: number of elements
 * Return: pointer to resulting `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	c = 0;

	while (src[c] != '\0' && n > 0;)
	{
		dest[i] = src[c];
		c++;
		n--;
		i++;
	}
	return (dest);
}
