#include "dog.h"

/**
 * init_dog - initializes a var of struct dog
 * @d: pointer to the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner oddog
 *
 * Return: void
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age =age;
		d->owner = owner;
	}
}
