#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - check main
 *@n: integer
 *Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if ((n == 98)
				continue);
			printf(", ");
		}
	}
	else
		{
			for (; n >=98; n--)
			{
				printf("%d", n);

				if ((n == 98)
					continue);
				printf(", ");
			}
		}
	}
	printf("\n");
}
