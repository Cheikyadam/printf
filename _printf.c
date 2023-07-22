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
	int l;
	char *s;
	int nb_car = 0;

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
					s = va_arg(ap, char *);
					l = len(s);
					handler_s(s, l);
					nb_car += l;
					break;
				case 'c':
					handler_c(va_arg(ap, int));
					nb_car += 1;
					break;
				default:
					_putchar(format[i]);
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			nb_car += 1;
		}
	}
	va_end(ap);
	return (nb_car);
}
