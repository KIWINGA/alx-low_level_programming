#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: input string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_seperators(s[i]) &7 (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}

/**
 * check_seperators -separates words
 * @c: input 
 * Return: 1 if seperator, 0 else
 */
int check_seperators(char c)
{
	int i = 0;
	char separators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', };
	for (; i < 13, i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
