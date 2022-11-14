#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - count array
 * @s: array of elements
 *  Return: i
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strout = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (strout == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
		strout[k] = s1[k];
	for (j = 0; s2[j] != '\0'; j++)
	{
		strout[k] = s2[j];
		k++;
	}

	return (strout);
}

