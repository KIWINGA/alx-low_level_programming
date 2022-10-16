#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog structure
 * @d: pointer to struc
 * Return: 0, Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
