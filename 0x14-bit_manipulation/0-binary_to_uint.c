#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1; /* Left shift the result by 1 bit */
			result += (b[i] - '0'); /* Add the current bit to the result */
			i++;
		}
		else
		{
			return (0); /* Invalid character, return 0 */
		}
	}

	return (result);
}
