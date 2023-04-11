#include <stdlib.h>

/**
 * create_array - function to create an array of characters
 * @size: array allocation\
 * @c: character to initialize array
 * @c: character
 *
 * Return: if succesfukk array
 */

char *create_array(unsigned int size, char c)
{
char *array;
if (size == 0)
return (NULL);

array = malloc(sizeof(*array) * size);
if (array == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
array[i] = c;

return (array);
}
