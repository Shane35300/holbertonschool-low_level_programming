#include <stdio.h>
/**
* main - main function
* Return: return to 0
* Putchar: display lettres
*/
int main(void)
{
	int chiffre;

	for (chiffre = 0 ; chiffre < 10 ; chiffre++)
	{
			putchar('0' + chiffre);
	}
	putchar('\n');
	return (0);
}
