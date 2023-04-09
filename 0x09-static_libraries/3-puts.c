#include "main.h"
/**
 * _puts - prinst string
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
