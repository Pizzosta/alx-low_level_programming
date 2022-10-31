#include "main.h"

/**
 * print_most_numbers - 1-9 prints omiting 2 & 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if ((ch != 50) && (ch != 52))
		{
			_putchar (ch);
		}
	}
	_putchar ('\n');
}
