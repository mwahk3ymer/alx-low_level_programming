# include  "main.h"

/**
 * print_numbers(void) - prints nmbers from 0 to 10
 * followed by a new line
 */

void print_numbers(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
c = i + '0';
_putchar(c);
}

_putchar('\n');
}
