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

	if (format == NULL)
		return (0);

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 's':
					handler_s(va_arg(ap, char *));
					break;
				case 'c':
					handler_c(va_arg(ap, int));
					break;
				default:
					_putchar(format[i]);
					break;
				
			}
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(ap);
	return (i);
}
