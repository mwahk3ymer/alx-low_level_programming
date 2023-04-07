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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);
	int coins [] = {25, 10, 5, 2, 1};
	int num_coins = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			num_coins++;
			cents -= coins[i];
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
