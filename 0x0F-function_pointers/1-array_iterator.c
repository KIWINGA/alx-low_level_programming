#include <stdlib.h>
/**
 * array_iterator - function executing a parameter
 * @array: pointer to an array
 * @size: size of array
 * @action: iterates throw away
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
