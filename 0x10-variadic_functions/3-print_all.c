#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a char
 * @arg: arg to print
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - prints integer
 * @arg: argument to print
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - prints a float
 * @arg: arg to print
 */

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - prints str
 * @arg: argument to print
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: lists all types of args passed to the fxn
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j;
	char c;
	char *separator = "";
	const char *const valid_formats = "cifs";

	void (*print_fn[])(va_list) = {
		print_char,
		print_int,
		print_float,
		print_string,
	};

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;
		c = format[i];
		while (valid_formats[j])
		{
			if (c == valid_formats[j])
			{
				printf("%s", separator);
				print_fn[j](arg);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(arg);
}
