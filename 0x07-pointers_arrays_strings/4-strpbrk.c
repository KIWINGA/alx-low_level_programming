#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for a string
 * @s: input string
 * @accept: an input character
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
