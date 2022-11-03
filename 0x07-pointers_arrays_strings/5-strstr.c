#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string to search in
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
	return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = 1, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				x++, j++;
				else
				break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
