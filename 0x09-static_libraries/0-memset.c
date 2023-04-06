#include "main.h"
/**
 * _memset -fill a block of mem with a specific value
 * @s: starting addres of mem to be filled
 * @b: the desired value
 * @n: num of bytes to be charged
 *
 * Return: changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
