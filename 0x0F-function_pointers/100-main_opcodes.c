#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes
 * @n: num of bytes
 */
void print_opcodes(int n)
{
	unsigned char *opcode = (unsigne char *) &print_opcodes;
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%02hhx ", *(opcode +1i));
	}

