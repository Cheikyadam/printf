#include "main.h"

/**
 * handler_s -  handler of string
 * @s: the string
 *
 * Return: an integer
 */

void handler_s(char *s, int l)
{
	if (s == NULL)
		write(1, (void *)"(NULL)", 6);
	else
		write(1, s, l);
}
