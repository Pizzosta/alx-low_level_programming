#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: always 0 successful
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
