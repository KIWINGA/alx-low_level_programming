#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function allocating memory for an array
 * @nmemb: input int
 * @size: input int
 * Return: Return pointer to alloacted memory, otherwise if int
 * is 0 return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	space = malloc(nmemb * size);
	if (space == NULL)
	{
		return (NULL);
	}
	for (; i < nmemb *size; i++)
	{
		*(space + i) = 0;
	}
	return (space);
}
