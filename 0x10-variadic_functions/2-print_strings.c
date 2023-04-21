#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print number of strings given
 * @separator: comma
 * @n: fixed arg
 * @...: unkown arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		printf("%s", str == NULL ? "(nil)" : str);

		if (separator && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);

}
