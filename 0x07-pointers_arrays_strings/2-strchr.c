#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to find
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == c)
		{
			return (s + d);
		}
	}
	if (s[d] == c)
		return (s + d);
	return (0);
}
