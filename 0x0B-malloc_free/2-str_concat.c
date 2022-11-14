#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	strout = malloc(sizeof(char) * (i + j + 1));
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

