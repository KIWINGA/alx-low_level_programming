#include "main.h"
/**
 * string_toupper - function changing lower to uppercase
 * @s: input string
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
