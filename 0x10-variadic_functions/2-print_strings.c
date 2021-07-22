#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - print all given strings
 *@separator: string to be printed as separator
 *@n: len of variadic parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
		{
			if (separator == NULL)
				printf("%s", va_arg(ap, char *));
			else
				printf("%s%s", va_arg(ap, char *), separator);
		}
		else
			printf("%s", va_arg(ap, char *));
	}
	va_end(ap);
	printf("\n");
}
