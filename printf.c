#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - Custom putchar function
 * @c: Character to be printed
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _printf - Custom printf function
 * @format: Format string with placeholders
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *ptr;
    char *str;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++)
    {
        if (*ptr == '%')
        {
            ptr++;
            switch (*ptr)
            {
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str != NULL)
                    {
                        while (*str)
                        {
                            count += _putchar(*str);
                            str++;
                        }
                    }
                    else
                    {
                        count += write(1, "(null)", 6);
                    }
                    break;
                case 'd':
                    count += print_number(va_arg(args, int));
                    break;
                case 'i':
                    count += print_number(va_arg(args, int));
                    break;
                case 'u':
                    count += print_unsigned(va_arg(args, unsigned int));
                    break;
                case 'x':
                    count += print_hex(va_arg(args, unsigned int), 0);
                    break;
                case 'X':
                    count += print_hex(va_arg(args, unsigned int), 1);
                    break;
                case 'o':
                    count += print_octal(va_arg(args, unsigned int));
                    break;
                case 'p':
                    count += print_hex(va_arg(args, unsigned long int), 1);
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                default:
                    _putchar('%');
                    count++;
                    _putchar(*ptr);
                    count++;
                    break;
            }
        }
        else
        {
            _putchar(*ptr);
            count++;
        }
    }

    va_end(args);

    return count;
}

/**
 * print_number - Print an integer
 * @n: Integer to be printed
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
    int count = 0;
    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
        count += print_number(n / 10);

    count += _putchar(n % 10 + '0');

    return count;
}

/**
 * print_unsigned - Print an unsigned integer
 * @n: Unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int n)
{
    int count = 0;

    if (n / 10 != 0)
        count += print_unsigned(n / 10);

    count += _putchar(n % 10 + '0');

    return count;
}

/**
 * print_hex - Print a hexadecimal number
 * @n: Number to be printed
 * @uppercase: 1 for uppercase letters, 0 for lowercase
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
    int count = 0;

    if (n / 16 != 0)
        count += print_hex(n / 16, uppercase);

    if (n % 16 < 10)
        count += _putchar(n % 16 + '0');
    else if (uppercase)
        count += _putchar(n % 16 - 10 + 'A');
    else
        count += _putchar(n % 16 - 10 + 'a');

    return count;
}

/**
 * print_octal - Print an octal number
 * @n: Number to be printed
 *
 * Return: Number of characters printed
 */

int print_octal(unsigned int n)
{
    int count = 0;

    if (n / 8 != 0)
        count += print_octal(n / 8);

    count += _putchar(n % 8 + '0');

    return count;
}