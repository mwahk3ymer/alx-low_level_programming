#include "main.h"
/**
 * _memcpy - a funtion that copies mem area
 * @dest: mem where its stored
 * @src: mem where its copied
 * @n: num of bytes
 *
 * Return: copied mem with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
