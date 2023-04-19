#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - executes a fxn on each element
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to the fxn
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(1);

	for (i = 0; i < size; i++)
		action(array[i]);
}
