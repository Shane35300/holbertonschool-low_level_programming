#include <stdio.h>
/**
* main - main function
* Return: return to 0
* Putchar: affiche les chiffres et caractères ASCII
*/
int main(void)
{
	int nb;
	int space = 32;
	int comma = 44;
	int dollar = 36;

	for (nb = 0 ; nb < 10 ; nb++)
	{
		if (nb < 9)
		{
		putchar('0' + nb);
		putchar(comma);
		putchar(space);
		}
		else
		{
			putchar('9');
			putchar(dollar);
		}
	}
	putchar('\n');
	return (0);
}
