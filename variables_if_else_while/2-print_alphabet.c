#include <stdio.h>
/**
* main - main function
* Return: return to 0
* Putchar: display lettres
*/
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
			putchar(lettre);
			putchar('\n');
			lettre++;
		}
	return (0);
}
