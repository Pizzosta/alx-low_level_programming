#include "main.h"
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	_putchar('\n');
	return (dest);
}
