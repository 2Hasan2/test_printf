#include "main.h"

/**
 * print_address - prints address in hexadecimal format
 * @args: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of characters printed
 */
int print_address(va_list args, flags_format *f)
{
	(void)f;
	unsigned long int p = va_arg(args, unsigned long int);

	if (!p)
		return (_puts("(nil)"));
	char *str = convert(p, 16, 1);

	return (_puts("0x") + _puts(str));
}
