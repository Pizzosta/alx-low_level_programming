#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: input string
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
