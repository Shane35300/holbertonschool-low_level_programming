#include <stdio.h>
/**
 * main - function name
 * Description: program that prints its name
 * @argc: arg nbre
 * @argv: arg array
 * Return: return
*/
int main(int argc, char *argv[])
{
	(void)(argv);

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
