#include "main.h"

/**
 * len - lenght of a string
 * @s: the string
 *
 * Return: an integer
 */

int len(char *s)
{
	char *p;

	if (s == NULL)
		return (0);

	p = s;
	while (*p != '\0')
		p++;
	return (p - s);
}
