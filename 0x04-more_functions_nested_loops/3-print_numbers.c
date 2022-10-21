#include "main.h"

/**
 * print_numbers - form 0-9
 *
 * Return: always 1 (success)
 */

void print_numbers(void)
{
	int i;

	for (i=0; i<10; i++)
	{
		_putchar(i + '0');
	}
	_putchar("\n");
}
