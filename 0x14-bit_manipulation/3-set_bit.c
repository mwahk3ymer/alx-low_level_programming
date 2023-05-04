/**
 * set_bit - sets the value of bit to 1
 * @n: pointer to num to modify
 * @idx: the index to set
 *
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int idx)
{
	if (idx >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << idx;

	return (1);
}
