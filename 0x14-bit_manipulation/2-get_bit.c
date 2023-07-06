/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index,.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8)) /* Check if index is valid */
		return (-1);

	/*unsigned long int mask = 1UL << index;*/

	if ((n & mask) != 0) /* Check if the bit at the given index is set */
		return (1);
	else
		return (0);
}
