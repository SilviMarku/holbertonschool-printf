#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list list;
	print_func p_func [] = {
		{"c", print_char},
		{"s", print_string},

		{NULL, NULL}
	};
	va_start(list, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i+1] != '%')
		{
			j = 0;
			while (p_func[j].format != NULL)
			{
				if (format[i+1] == *p_func[j].format)
				{
					count += p_func[j].print(list);
					i++;
					break;
				}
				j++;
			}
			if (p_func[j].format == NULL)
				putchar(format[i]);
		}
		else if (format[i] == '%' && format[i+1] == '%')
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
