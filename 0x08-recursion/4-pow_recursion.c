#include "main.h"

/**
 * _pow_recursion - a function that returns the value
 * of x raised to the power of y
 * @x: first integer
 * @y: second integer
 * Return: -1 If y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if ((x <= 0 && y >= 0) || (x >= 0 && y >= 0))
		return;
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y));
}
