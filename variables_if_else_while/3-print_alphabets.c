#include <stdio.h>
/**
* main - main function
* Return: return to 0
* Putchar: display lettres
*/
int main(void)
{
	char lettre = 'a';
	char Lettre = 'A';

	while (lettre <= 'z')
	{
			putchar(lettre);
			lettre++;
	}
	while (Lettre <= 'Z')
	{
		putchar(Lettre);
		Lettre++;
	}
	putchar('\n');
	return (0);
}
