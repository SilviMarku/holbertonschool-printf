#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_char - functions that prints char character
*from va_list
*@char_list: list of characters
*Return: Return  1
*/
int print_char(va_list char_list)
{
	char arg = va_arg(char_list, int);

	putchar(arg);
	return (1);
}
/**
 *print_string - functions that prints string from va_list
 *@string_list: list of string
 *Return: string
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
	return (i);
}
/**
 *print_int_rec - recursive function
 *@n: number of characters
 *@count: count number
 *Return: nr of digits
 */
int print_int_rec(long int n, int count)
{
	int nr_digits = count;

	if (n < 0)
	{
		putchar('-');
		n = n * (-1);
	}
	if (n / 10)
	{
		nr_digits = print_int_rec(n / 10, count + 1);
	}
	putchar(n % 10 + '0');
	return (nr_digits);
}
/**
 *print_int - function to print int
 *@int_list: list of arguments
 *Return: length of the int
 */
int print_int(va_list int_list)
{
	long int number;

	number = (long int)(va_arg(int_list, int));

	if (number < 0)
		return (print_int_rec(number, 2));
	return (print_int_rec(number, 1));
			}
