#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function name
 * Description: program that prints its name
 * @argc: arg nbre
 * @argv: arg array
 * Return: return
*/
int main(int argc, char *argv[])
{
	int i, j;
	int somme = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] != '\0' ; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					somme += atoi(argv[i]);
				}
			}
		}
		printf("%d\n", somme);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
