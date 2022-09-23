#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: input
 * @n: no of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int d;

	while (i < n--)
	{
		d = a[i];
		a[i++] = a[n];
		a[n] = d
	}
}
