#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - print all given ints
 *@separator: string to be printed between ints
 *@n: len of variadic parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
		{
			if (separator == NULL)
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
		else
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
