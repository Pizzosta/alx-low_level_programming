#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 *
 * Return: always 0 succesful
 */

void times_table(void)
{
	int a, b, op;

	for (a = 0; a <= 9; a++)
	{
		_putchar(0);

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			op = a * b;

			if (op <= 9)
				_putchar(' ');
			else
				_putchar((op / 10) + 0);
			_putchar((res % 10) + 0);
		}
		_putchar('\n');
	}
}

