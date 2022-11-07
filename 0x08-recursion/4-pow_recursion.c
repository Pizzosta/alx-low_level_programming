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
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y));
}
