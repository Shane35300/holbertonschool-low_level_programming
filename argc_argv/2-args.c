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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
