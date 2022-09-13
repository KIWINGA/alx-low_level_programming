#include "main.h"
/**
 * _isalpha - Check main
 * @c: Input character
 * Description: function returns 1 if character is a letter
 * Return: 1 or 0 if inverse
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower ++)
	{
		for (upper = 'A'; lower <= 'Z'; upper ++)
		{
			if (c == lower || c == upper)
				is letter = 1;
		}
	}
	return (isletter);
}
