#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int print_char(va_list char_list)
{
	char arg = va_arg(char_list, int);
	putchar(arg);
	return(1);
}
/**
 *
 *
 */
int print_string(va_list string_list)
{
	int i;
	char *str;
	str = va_arg(string_list, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	return(i);
}

