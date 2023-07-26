#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int (*get_function(char c))(va_list)
{
	int i = 0;
	print_func p_func[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},

		{NULL, NULL}
	};
	while (p_func[i].format)
{
	if (*p_func[i].format == c)
		return (p_func[i].print);
	i++;
}
return (NULL);
}
