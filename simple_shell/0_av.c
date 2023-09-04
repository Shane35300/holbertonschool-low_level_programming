#include <stdio.h>
/**
 * main - function name
 * Description: program that prints its name
 * @argc: arg nbre
 * @argv: arg array
 * Return: return
*/
int main(int ac, char **av)
{
	int i = 0;

	if (ac > 0)
	{
		while (av[i] != NULL)
		{
			printf("%s\n", av[i]);
			i++;
		}
	}
	return (0);
}
