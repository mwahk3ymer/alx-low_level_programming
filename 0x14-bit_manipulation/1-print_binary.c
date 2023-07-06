#include <stdlib.h>
#include <limits.h>

int _putchar(char c);

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
		_putchar('0' + n);
	else
	{
		print_binary(n >> 1); /* Right shift n by 1 bit */
		_putchar('0' + (n & 1)); /* Print the least significant bit */
	}
}
