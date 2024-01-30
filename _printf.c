#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: states identifier to look for.
 * Return: the length of the output.
 */

int _printf(const char *format, ...)
{
	convert p[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_percent}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Check:

	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				len += p[j].function(args);
				i += 2;
				goto Check;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
