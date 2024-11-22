#ifndef VARIA_H
#define VARIA_H
#include <stdarg.h>

/**
 * struct print - A struct that defines a printer.
 * @op: The operator or format specifier for the printer.
 * @f: A function pointer to a function that takes a separator and a va_list
 *     of arguments, and prints according to the format specified by @op.
 */
typedef struct print
{
	char *op;

	void (*f)(char *separator, va_list args);
} print;

void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_str(char *separator, va_list args);

void print_all(const char * const format, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...);

int _putchar(char c);

#endif
