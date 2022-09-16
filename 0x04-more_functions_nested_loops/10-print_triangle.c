#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; 1 <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
