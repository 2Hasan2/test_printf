#include "main.h"

int main(void)
{
    int len;

    len = _printf("Let's test our custom printf function!\n");
    _printf("Length: %d\n", len);

    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Integer: %d\n", 42);
    _printf("Decimal: %i\n", 123);
    _printf("Reversed String: %r\n", "ReverseMe");
    _printf("Binary: %b\n", 255);
    _printf("Unsigned Integer: %u\n", 12345);
    _printf("Octal: %o\n", 64);
    _printf("Lowercase Hexadecimal: %x\n", 255);
    _printf("Uppercase Hexadecimal: %X\n", 255);
    _printf("ROT13: %R\n", "Hello, World!");

    return (0);
}
