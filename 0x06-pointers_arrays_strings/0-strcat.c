#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (d);
}
