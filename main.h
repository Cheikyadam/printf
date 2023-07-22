#ifndef _HEADER_
#define _HEADER_

#include <stddef.h>
#include <unistd.h>

int len(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
void handler_s(char *s, int l);
void handler_c(int c);

#endif
