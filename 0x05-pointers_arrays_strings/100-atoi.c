#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	s = _atoi("xd-xds5");
	/*s =  1000000000;*/
	printf("%d\n", s);
	s = _atoi("-402");
	printf("%d\n", s);
	s = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", s);
	s = _atoi("214748364");
	printf("%d\n", s);
	s = _atoi("0");
	printf("%d\n", s);
	s = _atoi("Suite 402");
	printf("%d\n", s);
	s = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", s);
	s = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", s);
	return (0);

}
