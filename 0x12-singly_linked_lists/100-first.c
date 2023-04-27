#include <stdio.h>
#include <stdlib.h>

/**
 * pre_main - function that prints a message before main is executed
 *
 * Return: void
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
