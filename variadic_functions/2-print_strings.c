#include "variadic_functions.h"
#include <stdarg.h>
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
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char str = va_arg(ap, char);

		printf("%s", str);

		if (separator && i < n - 1)
		{
			for (i = 0; separator[i] != '\0'; i++)
			{
				printf(separator[i]);
			}
		}
	}
	va_end(ap);
	_putchar('\n');
}
