#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: is a lowercase or uppercase
 * Return: always 1 succesful or 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
