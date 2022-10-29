#include "main.h"
#include <string.h>

/**
 * *_strncpy - a fucntion thats copies a string
 * @dest: string 1
 * @src: string 2
 * @n: string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}
