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
	unsigned char *x = s;
	i = 0;

	while (n > 0)
	{
		*x = (unsigned char) b;
		x++;
		n--;
	}

	return (s);
}
