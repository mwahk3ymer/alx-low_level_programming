#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - creates an array
 * @min: the min value
 * @max: the max value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
