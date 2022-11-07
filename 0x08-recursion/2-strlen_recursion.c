#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: input string
 * Return: to dest
 */

int _strlen_recursion(char *s)
{
	return (_strlen_recursion(s - 1));
}
