#include <stdlib.h>

/**
 * int_index - searches fo an int
 * @array: the array to search
 * @size: the size of array
 * @cmp: a pointer to the fxn
 *
 * Return: the index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
