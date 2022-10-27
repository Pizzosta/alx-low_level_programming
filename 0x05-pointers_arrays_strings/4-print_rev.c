#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: input string
 * Return: no return
 */

void print_rev(char *s)
{
	int leng, g;

	leng = strlen(s);
	for (g = leng - 1; g >= 0; g--)
	_putchar(s(g));	
	_putchar('\n');
}
