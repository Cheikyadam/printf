#include "main.h"

/**
 * len - lenght of a char
 * @s: the string
 *
 * Return: an integer
 */

int len(char *s)
{
	char *p;

	p = s;
	while (*p != '\0')
		p++;
	return (p - s);
}	

/**
 * handler_s: handler of string
 * @s: the string
 *
 * Return: an integer
 */

void handler_s(char *s)
{
	if (s == NULL)
		write(1, (void*)"(NULL)", 6);
	else
		write(1, s, len(s));
}
