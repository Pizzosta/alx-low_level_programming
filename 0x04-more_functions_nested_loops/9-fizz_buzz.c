#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 * description - prints the numbers from 1 to 100
 * Fizz multiples of 3 print & Buzz multiples of 5 print
 * FizzBuzz both multiples
 * Return: alwaus 0 succesful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz")
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	prinf("\n")
	return (0);
}
