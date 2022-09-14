#include "main.h"
/**
 * times_table - refer to description
 * Description: prints 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int d = j * i;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (d <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
