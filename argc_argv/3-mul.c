#include <stdio.h>
#include <stdlib.h>
/**
 * main - function name
 * Description: program that prints its name
 * @argc: arg nbre
 * @argv: arg array
 * Return: return
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
