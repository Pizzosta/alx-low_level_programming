#include "main.h"

/**
 * print_most_numbers - 1-9 prints omiting 2 & 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
			_putchar (ch);
	}
	_putchar ('\n');
}
