#include <stdio.h>
#include <stdlib.h>

/**
 * main - prinst min mum of coins
 * @argc: num of arg
 * @argv:array of args
 *
 * Return: 0 if succes 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
