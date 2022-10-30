#include "main.h"

/**
 * reverse_array - reverses the content of an array
 *  of integers
 *  @a: array
 *  @n: number of elements of the array
 *  Return: no return
 */

void reverse_array(int *a, int n)
{
	int b;
	int x;

	for (b = n - 1; b >= n / 2; b--)
	{
		x = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = x;
	}
}
