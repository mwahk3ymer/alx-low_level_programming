/**
 * get_endianness - checks the endianes
 *
 * Return: o for big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
