#include "main.h"
#include <string.h>

/**
 * puts2 - function a function that prints every other character
 * of a string, starting with the first character
 *
 * @str: string
 */

void puts2(char *str)
{
	int c;
	int end;

	end = strlen(str) - 1;
	for (c = 0, c <= end; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
