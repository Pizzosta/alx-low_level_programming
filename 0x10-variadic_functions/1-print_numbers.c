#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 *  Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list V;
	unsigned i;

	va_start(V, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(V, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(V);
}
