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
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (i + 1 != n)
		{
			if (separator == NULL)
			{
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
			}
			else
			{
				if (str != NULL)
					printf("%s%s", str, separator);
				else
					printf("(nil)%s", separator);
			}
		}
		else
		{
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	va_end(ap);
	printf("\n");
}
