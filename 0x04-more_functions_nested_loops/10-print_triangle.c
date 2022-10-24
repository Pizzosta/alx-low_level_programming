#include <main.h>
/**
 * print_triangle - print a triangle followed by a new line
 * @size: rows to print
 * Return: no return
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - a); b++)
			_putchar(' ');

		for (b--; b < size; b++)
			_putchar('#');

		if (a < (size - 1))
			_putchar('\n')

	}
	_putchar('\n');
}
