#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary num
 * @b: pointer to string of 0 & 1 chars
 *
 *Return: the converteed num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		num += (*b - '0');
		b++;
	}

	return (num);
}
