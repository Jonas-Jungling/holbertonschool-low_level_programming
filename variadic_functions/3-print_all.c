#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	print form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		while (form[j].op != NULL)
		{
			if (format[i] == *form[j].op)
			{
				form[j].f(separator, args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(args);

}

/**
 * print_char - Prints a character.
 * @separator: The string to be printed before the character.
 * @args: A va_list of arguments pointing to the character to be printed.
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @separator: The string to be printed before the integer.
 * @args: A va_list of arguments pointing to the integer to be printed.
 */
void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @separator: The string to be printed before the float.
 * @args: A va_list of arguments pointing to the float to be printed.
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - Prints a string.
 * @separator: The string to be printed before the string.
 * @args: A va_list of arguments pointing to the string to be printed.
 */
void print_str(char *separator, va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	s = "(nil)";

	printf("%s%s", separator, s);
}
