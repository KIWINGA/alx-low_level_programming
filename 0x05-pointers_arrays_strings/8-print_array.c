#include "main.h"
/**
 * print_array - prints elements of an array
 * of integers
 * @a: array
 * @n: integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
