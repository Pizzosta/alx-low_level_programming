#include "main.h"

/**
 * puts_half - function
 *
 * @str: operand
 *
 * Return:void
 */

void puts_half(char *str)
{

		int string = 0;
		int half;

		while (str[string] != '\0')
		{
			string++;
		}
		if (string + 1 % 2 != '0')
		{
			half = (string - 1) / 2;
		}
		else
		{
			half = (string / 2);
		}
		half++;
		for (string = half; str[string] != '\0'; string++)
		{
			_putchar(str[string]);
		}
		_putchar('\n');
}
