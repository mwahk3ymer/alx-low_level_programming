#include "main.h"
/**
 * _puts - prinst as string, followed by new line to stdout
 * @str: string to print
 * Return :on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
