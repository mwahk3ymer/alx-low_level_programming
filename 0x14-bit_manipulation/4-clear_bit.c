/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer tp num
 * @idx: index starting from 0
 *
 * Return:  1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int idx)
{
	if (idx >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << idx);

	return (1);
}
