#include "main.h"
#include <string.h>

/**
 * *_strcmp - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: dest
 */

char *_strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = 1
		}
		s1++;
		s2++;
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}
