#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum all of the given parameters
 *@n: first number to be added
 *Return: either the sum or 0 if n equals 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
