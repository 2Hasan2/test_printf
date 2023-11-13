#include "main.h"

/**
 * find_flag - function that finds formats for _printf
 * calls the corresponding function.
 * @format: format (char, string, int, decimal)
 * Return: NULL or function associated ;
 */
int (*find_format(const char *format))(va_list)
{
	unsigned int i = 0;
	code_format find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"R", print_rot13},
		{NULL, NULL}};

	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}

	return (NULL);
}