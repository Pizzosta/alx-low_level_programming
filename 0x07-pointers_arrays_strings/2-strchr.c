#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: target
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < strlen(s) - 1; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
