#include "main.h"
/**
 * print_alphabet-x10 - Included in main .h
 * Description: _putchar prints out alphabet 10 times
 * Return 0
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++0)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putcchar('\n');
	}
}