#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **struct print_func -funcion that produces output according to a format
 *@format: imput
 *@print: imput
 */
typedef struct print_func
{
	char *format;
	int (*print)(va_list list);
} print_func;
int (*get_function(char c))(va_list);
int _putchar(char c);
int print_char(va_list char_list);
int print_string(va_list string_list);
int print_int(va_list int_list);
int print_float(va_list float_list);
int _printf(const char *format, ...);
#endif

