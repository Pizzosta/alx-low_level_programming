#include "main.h"
/**
 * print_numbers - functn that prints from 0 to 9, followed by a new line.
 * Return: 0 always succesful
 */

void print_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
