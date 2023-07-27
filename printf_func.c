#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf - function to produce output according to a format
*@format: format to be used to print the output
*Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list list;
	int (*func)(va_list) = NULL;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			func = get_function(format[i + 1]);
				if (func)
				{
					count += func(list), i += 2;
					continue;
				}
			if (func == NULL)
			{
				count++;
				putchar(format[i]);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			i++;
			count += 1;
		}
		else
		{
			putchar(format[i]);
			count += 1;
		}
	i++;
	}
	va_end(list);
	return (count);
}
