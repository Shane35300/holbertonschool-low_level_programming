#include <stdio.h>
#include "excalc.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*ptr)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
