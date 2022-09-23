#include "main.h"
/**
 * _strncpy - function copying a string
 * @dest: input character
 * @src: input character
 * @n: input integer
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		d++;
		src++;
	}

	d++;

	if (n > d)
		n = d;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
