#include "main.h"
/**
 * _memset - fills first bytes of a memory area
 * @s: location
 * @b: char to fill
 * @n: number of bytes
 * Return: rerturns pointer to filled location
 */
char *_memset(char s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
