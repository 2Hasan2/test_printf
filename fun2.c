#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @arg: argument list
 * Return: number of printed characters
 */
int print_rev(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	count += print_reversed_string(str);

	return count;
}

/**
 * print_bin - prints a binary number
 * @arg: argument list
 * Return: number of printed characters
 */
int print_bin(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	count += print_binary(n);

	return count;
}

/**
 * print_unsig - prints an unsigned integer
 * @arg: argument list
 * Return: number of printed characters
 */
int print_unsig(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	count += print_number(n);

	return count;
}

/**
 * print_octal - prints an octal number
 * @arg: argument list
 * Return: number of printed characters
 */
int print_octal(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	count += print_octal_number(n);

	return count;
}

/**
 * print_rot13 - prints a string in ROT13 encoding
 * @arg: argument list
 * Return: number of printed characters
 */
int print_rot13(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	count += print_rot13_string(str);

	return count;
}
