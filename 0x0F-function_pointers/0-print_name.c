#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer to string
 * @f: pointer to a functon
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}
