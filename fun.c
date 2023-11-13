#include "main.h"

/**
 * print_char - prints a character
 * @arg: argument list
 * Return: number of printed characters
 */
int print_char(va_list arg)
{
	return _putchar(va_arg(arg, int));
}

/**
 * print_string - prints a string
 * @arg: argument list
 * Return: number of printed characters
 */
int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return count;
}

/**
 * print_int - prints an integer
 * @arg: argument list
 * Return: number of printed characters
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	count += print_number(n);

	return count;
}

/**
 * print_dec - prints a decimal
 * @arg: argument list
 * Return: number of printed characters
 */
int print_dec(va_list arg)
{
	return print_int(arg);
}