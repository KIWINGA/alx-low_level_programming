#include "main.h"
/**
 * jack_bauer: prints every minute of the day
 * Return: Always 0
 */
void jack_bauer(void)
{
	int H, M;

	for (h = 0; h <= 23; m++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10 +'0'));
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
