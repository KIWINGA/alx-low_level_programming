#include "main.h"
#include <stdio.h>
/**
 * _strcpy - functions copying string
 * @dest: pointer to string destination
 * @src: pointer to string source
 * Return: to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src)
		*dest++ = *src++;
	return (d);
}
