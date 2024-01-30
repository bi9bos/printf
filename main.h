#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
}convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int _strlenc(const char *s);
int _strlen(char *s);
int print_str(va_list val);
int print_percent(void);


#endif
