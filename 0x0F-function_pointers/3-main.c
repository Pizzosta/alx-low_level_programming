#include "3-calc.h"

/**
 * main - main function
 * @argc: arguments
 * @argv: array of args
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char operator;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", calc(num1, num2));

	return (0);
}
