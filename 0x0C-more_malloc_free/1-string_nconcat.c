#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: input integer
 * Return: Pointer to concatenated string or NULL if fails
 */
char *string_nconcat(cahr *s1, char 8s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[lens1])
	{
		lens++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[lens2])
	{
		lens2++;
	}
	if (n >= lens2)
	{
		n = lens2;
	}
	new str = malloc(lens1 + n + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
