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
	static int flag = 0, i = 0;

	if (strlen(s1) != strlen(s2))
	{
		return (0);
	}
	else if (i < strlen(s1))
	{
		if (s1[i] == s2[i])
		{
			flag++;
			i++;
		}
		_strcmp(s1, s2);
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}
