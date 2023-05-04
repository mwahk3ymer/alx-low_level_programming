/**
 * flip_bits - returns the num of bits one would flip
 * @n: first num
 * @m: second num
 *
 * Return: the num of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}

	return (count);
}
