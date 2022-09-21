#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: no of bytes
 * Return: Result of concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0', i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
