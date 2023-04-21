#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print any data type
 * @format: format to print in
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	char c;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])

		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'e':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s == NULL ? "(nil)" : s);
				break;
			default:
				break;
		}
		printf("%s", format[i + 1] ? ", " : "\n");
		i++;
	}
	va_end(args);
}
