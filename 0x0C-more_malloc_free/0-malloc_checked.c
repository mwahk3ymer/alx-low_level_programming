# include <stdlib.h>

/**
 *malloc_checked - allocaates mem
 *@b: the num of bytes to all
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
