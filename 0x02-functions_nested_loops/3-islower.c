#include "main.h"

/**
 * _islower - checks lower characters
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if successful else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
