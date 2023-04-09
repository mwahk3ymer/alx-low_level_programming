#include "main.h"
/**
 * _atoi -convert string to int
 * @str: string to use
 * Return: int
 */
int _atoi(char *str)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
			i++;
		}
	while (str[i] <= '9' && (str[i] >= '0' && str[i] != '\0'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
