#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct code_format - struct for format codes and corresponding functions
 * @sc: format code
 * @f: corresponding function
 */
typedef struct code_format
{
    char *sc;
    int (*f)(va_list);
} code_format;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_rev(va_list args);
int print_bin(va_list args);
int print_unsig(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_rot13(va_list args);
int print_number(int n);
int print_reversed_string(char *str);
int print_binary(unsigned int n);
int print_octal_number(unsigned int n);
int print_hexadecimal(unsigned int n, int uppercase);
int print_rot13_string(char *str);
int (*find_format(const char *format))(va_list);

#endif /* MAIN_H */
