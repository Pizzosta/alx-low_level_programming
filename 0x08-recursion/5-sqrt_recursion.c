#include "main.h"

/**
 * _sqrt_recursion -  a function that returns
 *  the natural square root of a number.
 *  @n: input interger
 *  Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int c;

	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + _sqrt_recursion(n, c + 1));
}
