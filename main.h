#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int print_unsigned(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int print_octal(unsigned int n);

#endif /* MAIN_H */