#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - fonction main
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: renvoi
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((num2 == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
