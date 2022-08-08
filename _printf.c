#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf-main function to print values in all formats
 *
 * @format:'Variable format specifier'
 * @...:'Undeclared variable'
 *
 * Return:Values to be printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i;

	va_list my_data;

	va_start(my_data, format);

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(my_data, int));
					break;
				case 's':
					count = print_string(va_arg(my_data, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_decimal(va_arg(my_data, int));
					break;
				case 'i':
					count += print_decimal(va_arg(my_data, int));
					break;
				default:
					count += _putchar('%') + _putchar('r');
					break;
			}
			i = i + 2;
		}
	}
	return (count);
}

