#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_char - functions that prints char character from va_list
 *@list: list of arguments
 *Return: Return  1
 *
 */
int print_char(va_list char_list)
{
	char arg = va_arg(char_list, int);
	putchar(arg);
	return(1);
}
/**
 *print_string - functions that prints string from va_list
 *@list: list of arguments
 *Return: string
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

