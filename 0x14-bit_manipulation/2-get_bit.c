#include "main.h"

/**
 * get_bit - returns e value
 * @n: num to search for bit
 * @idx: index to retrieve
 *
 * Return: value of bit at idx
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	unsigned int max_bits;

	max_bits = sizeof(unsigned long int) * 8;
	if (idx >= max_bits)
		return (-1);
	return ((n >> idx) & 1);
}
