#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory
 * @b: unsigned integer
 * Return: Pointer to allocated memory, otherwise NULL
 */
void *malloc_chekced(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}

