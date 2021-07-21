#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: string
 *@f: function that we are passing to print_name
 *
 */
void print_name(char *name, void (*f)(char *c))
{
	if (f == NULL || name == NULL || c == NULL)
		return;
	f(name);
}
