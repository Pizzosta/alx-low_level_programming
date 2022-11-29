#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
