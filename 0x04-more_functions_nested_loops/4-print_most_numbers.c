#include <main.h>

/**
 * print_most_numbers - 1-9 prints omiting 2 & 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;	
	
	for (i = 0; i <10; i++)
	{ 
		if (i != 2 && i != 4)
		{
			_putchar (i);
		}
	}
	_putchar ('\n');
}
