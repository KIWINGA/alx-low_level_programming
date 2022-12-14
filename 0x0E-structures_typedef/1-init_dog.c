#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable
 * @d: struct to initialize
 * @name: Dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
