#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - prints to standard output
 *
 * @format:  is a character string
 *
 * Return:  the number of chars printed
 */

int _printf(const char *format, ...)
{
	int n_chars = strlen(format);

	int i;

	va_list args;

	va_start(args, format);

	for (i = 0; i < n_chars; i++)
	{
		if (format[i] == 'c')
		{
			char ch_spec = va_arg(args, int);

			printf("%c", ch_spec);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			printf("%s", str);
		}
		else if (format[i] == '%')
		{
			char perc_spec = va_arg(args, int);

			printf("%c", perc_spec);
		}
	}

	va_end(args);

		return (n_chars);
}
