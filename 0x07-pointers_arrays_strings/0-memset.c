#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant bytes
 * @n: filled bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i;

	i = 0;
	while (s && n > 0)
	{
		s = b;
		s++;
		n--;
	}

	return (s);
}
