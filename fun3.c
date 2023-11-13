#include "main.h"

/**
 * print_hex - prints a hexadecimal number in lowercase
 * @arg: argument list
 * Return: number of printed characters
 */
int print_hex(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	count += print_hexadecimal(n, 0);

	return count;
}

/**
 * print_HEX - prints a hexadecimal number in uppercase
 * @arg: argument list
 * Return: number of printed characters
 */
int print_HEX(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	count += print_hexadecimal(n, 1);

	return count;
}