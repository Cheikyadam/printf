#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - printf project
 * @format: the format
 *
 * Return: an integer, number of bytes printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	char *s;

	if (format == NULL)
		return (0);

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
			{
				s = va_arg(ap, char *);
				if (s == NULL)
					write(1, (void*)"(NULL)", 1);
				else
					write(1, s, 1);
			}
			else
			{

				if (format[i + 1] == 'c')
					write(1, va_arg(ap, int), 1);
				else
					write(1, (void*) '%', 1);
			}
			i++;
		}
		_putchar(format[i]);
	}
	va_end(ap);
	return (i);
}
