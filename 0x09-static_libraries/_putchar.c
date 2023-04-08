#include <unistd.h>
/**
 * _putchar - prinst as string, followed by new line to stdout
 * @c: character to print
 * Return :on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
