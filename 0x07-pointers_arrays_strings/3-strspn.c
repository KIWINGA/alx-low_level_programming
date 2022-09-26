#include "main.h"
/**
 * int_strspn - gets the length of a prefix substring
 * @s: initial segment string
 * @accept: input character
 * Return: returns pointer to c
 */
unsigned int _strspn(char *s, char *accept)
{
	int count  = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag - 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
