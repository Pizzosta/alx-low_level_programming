#include <main.h>

/**
 * print_line - draws a straight line
 *
 * @n: times straight line is printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
