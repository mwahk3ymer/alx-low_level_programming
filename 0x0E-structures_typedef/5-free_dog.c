#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure from mem
 * @d: ponter to the dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
