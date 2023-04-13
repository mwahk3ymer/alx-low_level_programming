#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _calloc - allocates mem for an array
 * @nmemb: the num of element
 * @size: size of each elemeents
 *
 * Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
