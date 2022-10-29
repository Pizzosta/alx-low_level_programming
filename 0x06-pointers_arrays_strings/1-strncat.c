#include "main.h"
#include <string.h>

/**
 * *_strncat - a fucntion thats copies a string
 * @dest: string 1
 * @src: string 2
 * @n: param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
