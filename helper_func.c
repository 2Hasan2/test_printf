#include "main.h"

/**
 * print_number - helper function to print an integer
 * @n: integer to print
 * Return: number of printed characters
 */
int print_number(int n)
{
	int count = 0;

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar(n % 10 + '0');

	return count;
}

/**
 * print_reversed_string - helper function to print a string in reverse
 * @str: string to print
 * Return: number of printed characters
 */
int print_reversed_string(char *str)
{
	int count = 0;

	if (*str)
		count += print_reversed_string(str + 1);

	count += _putchar(*str);

	return count;
}

/**
 * print_binary - helper function to print a binary number
 * @n: binary number to print
 * Return: number of printed characters
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary(n / 2);

	count += _putchar(n % 2 + '0');

	return count;
}

/**
 * print_octal_number - helper function to print an octal number
 * @n: octal number to print
 * Return: number of printed characters
 */
int print_octal_number(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal_number(n / 8);

	count += _putchar(n % 8 + '0');

	return count;
}

/**
 * print_hexadecimal - helper function to print a hexadecimal number
 * @n: hexadecimal number to print
 * @uppercase: flag to print in uppercase (1) or lowercase (0)
 * Return: number of printed characters
 */
int print_hexadecimal(unsigned int n, int uppercase)
{
	int count = 0;
	char hex_chars[] = "0123456789abcdef";

	if (n / 16)
		count += print_hexadecimal(n / 16, uppercase);

	count += _putchar(hex_chars[n % 16] + (uppercase ? 'A' - 'a' : 0));

	return count;
}

/**
 * print_rot13_string - helper function to print a string in ROT13 encoding
 * @str: string to print
 * Return: number of printed characters
 */
int print_rot13_string(char *str)
{
	int count = 0;

	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			char base = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';
			count += _putchar(((*str - base + 13) % 26) + base);
		}
		else
		{
			count += _putchar(*str);
		}
		str++;
	}

	return count;
}