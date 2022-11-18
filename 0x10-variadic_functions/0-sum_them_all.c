#include "variadic_functions.h"

/**
 * sum_them_all - sum of inputs
 * @n: input
 * Return: sum;
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list V;
	int i;

	sum;

	va_start(V, n);

	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(V, int);

	va_end(V);
	return (sum);
}
