#include "main.h"
/**
 * _islower - Refer to main
 * @c - input character
 * Description: _putchar function prints out
 * Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	retrun (lower);
}
