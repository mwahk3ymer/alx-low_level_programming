#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - checks if a string contains only digits
 * @num: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_valid_number(char *num)

{
	int i;
	if (!num)
		return (0);

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - multiplies two command-line arguments and prints the result
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int *result;

	if (argc != 3)
	{
		fprintf(stderr, "Error: invalid number of arguments\n");
		exit(98);
	}
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		fprintf(stderr, "Error: invalid argument(s)\n");
		exit(98);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = malloc(sizeof(int));

	if (!result)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	*result = num1 * num2;
	printf("%d\n", *result);

	free(result);
	return (0);
}
