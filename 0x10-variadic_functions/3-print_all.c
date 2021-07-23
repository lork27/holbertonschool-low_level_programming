#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - print all given argument a la printf
 *@format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	char *c;
	char *comma = "";
	va_list list;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", comma, va_arg(list, int));
				comma = ", ";
				break;
			case 'i':
				printf("%s%i", comma, va_arg(list, int));
				comma = ", ";
				break;
			case 'f':
				printf("%s%f", comma, va_arg(list, double));
				break;
			case 's':
				c = va_arg(list, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s%s", comma, c);
				comma = ", ";
				break;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
