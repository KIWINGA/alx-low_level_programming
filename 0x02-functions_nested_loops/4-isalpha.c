#include "main.h"
/**
 * _isalpha - Check main
 * @c: Input character
 * Description: function returns 1 if character is a letter
 * Return: 1 or 0 if inverse
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
