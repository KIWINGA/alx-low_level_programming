#include <stdlib.h>
/**
 * int_index - function searching for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: compares the throw away elements
 * Return: indexof first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	
	if (cmp == NULL || array = NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (; i < size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}
	if (i == size)
	{
		return(-1);
	}
	return (-1);
}
