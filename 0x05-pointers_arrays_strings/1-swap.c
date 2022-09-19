#include "main.h"
/**
 * swap_int - function swapping two integers
 * @a: integer pointer
 * @b: integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a =*b;
	*b = c;
}
