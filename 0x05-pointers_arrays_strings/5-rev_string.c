#include "main.h"
/**
 * rev_string - reverses a string
 * @s: integer
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char d;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		d = s[i];
		s[i++] = s[len];
		s[len] = d;
	}
}
