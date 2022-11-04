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
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{	
		i = 0;

		if (haystack[i] == needle[i])
		{
			do 
			{	
				if (needle[i + 1] == '\0')
					return (haystack);
				i++
			}
			while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
