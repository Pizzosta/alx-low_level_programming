#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int u, i;

	for (u = 0; u <= 9; u++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar("\n");
	}

}
