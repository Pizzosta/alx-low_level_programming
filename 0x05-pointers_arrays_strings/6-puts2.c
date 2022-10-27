#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints every other string
 * @str: string
 */

void puts2(char *str)
{
	char c;

	for (c = 0; c < strlen(str); c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
