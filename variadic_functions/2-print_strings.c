#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between the strings.
* @n: The number of strings passed to the function.
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	while (i < n)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
		printf("(nil)");

		else
		printf("%s", str);

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
