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
	unsigned char *p = s;

	while (n > 0)
	{
		*p = (unsigned char)b;
		p++;
		n--;
	}

	return (s);
}
