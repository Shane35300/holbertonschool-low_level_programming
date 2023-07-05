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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
