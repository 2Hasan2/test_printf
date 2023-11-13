## _printf
handles the following conversion specifiers: `c`, `s`, `%`, `d`, `i`, `b`, `u`, `o`, `x`, `X`, `r`, `R`

- [1] `int _printf(const char *format, ...);` - prints a formatted string

### find_format.c
- [1] `int (*find_format(const char *format))(va_list);` - finds the correct function to print a given format

### _putchar.c
- [1] `int _putchar(char c);` - writes a character to stdout

### fun.c
- [1] `int print_char(va_list args);` - prints a character
- [2] `int print_string(va_list args);` - prints a string
- [3] `int print_int(va_list args);` - prints an integer
- [4] `int print_dec(va_list args);` - prints a decimal

### fun2.c
- [1] `int print_rev(va_list arg);` - prints a string in reverse
- [2] `int print_bin(va_list args);` - prints a binary
- [3] `int print_unsig(va_list args);` - prints an unsigned integer
- [4] `int print_octal(va_list args);` - prints an octal
- [5] `int print_rot13(va_list args);` - prints a string in rot13

### fun3.c
- [1] `int print_hex(va_list args);` - prints a hexadecimal in lowercase
- [2] `int print_HEX(va_list args);` - prints a hexadecimal in uppercase

### helper_func.c
- [1] `int print_number(int n);` - helper function for number printing
- [2] `int print_reversed_string(char *str);` - helper function for printing a string
- [3] `int print_binary(unsigned int n);` - helper function for printing a binary
- [4] `int print_octal_number(unsigned int n);` - helper function for printing an octal number
- [5] `int print_hexadecimal(unsigned int n, int uppercase);` - helper function for printing a hexadecimal number
- [6] `int print_rot13_string(char *str);` - helper function for printing a string in rot13


### total number of functions: 20

#### to compile:
`gcc -Wall -Werror -Wextra -pedantic *.c`