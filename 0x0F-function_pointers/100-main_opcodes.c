#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes
 * @n: num of bytes
 */
void print_opcodes(int n)
{
	unsigned char *opcode = (unsigned char *) &print_opcodes;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx ", *(opcode +  i));
	}
	printf("\n");
}

/**
 * main - entry
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0 on succes
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

if (n < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(n);

return (0);
}
