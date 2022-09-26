#include "main.h"
/**
 * _memcpy - function copying memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: returns pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
