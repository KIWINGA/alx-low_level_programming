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
	int d = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		d++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > d)
		n = d;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
