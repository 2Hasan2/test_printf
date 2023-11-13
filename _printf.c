#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format (char, string, int, decimal)
 * Return: size the output text;
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*found_format)(va_list);
	unsigned int i = 0, count_printed_chars = 0;

	if (format == NULL)
		return -1;

	va_start(arg, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			count_printed_chars += _putchar(format[i]);
			i++;
		}

		if (format[i] == '\0')
			return count_printed_chars;

		found_format = find_format(&format[i + 1]);

		if (found_format != NULL)
		{
			count_printed_chars += found_format(arg);
			i += 2;
			continue;
		}

		if (!format[i + 1])
			return -1;

		count_printed_chars += _putchar(format[i]);

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(arg);
	return count_printed_chars;
}
