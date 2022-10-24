#include "main.h"

/**
 * print_times_table - a function that prints the 9 times table
 * @n: number times table
 * Return: always 0 succesful
 */

void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		_putchar('0');

		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');

			op = a * b;

			if (op <= n)
				_putchar(' ');
			else
				_putchar((op / 10) + '0');
			_putchar((op % 10) + '0');
		}
		_putchar('\n');
	}
	}
}

