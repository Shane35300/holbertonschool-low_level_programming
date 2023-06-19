#include <stdio.h>
/**
* main - main function
* Return: return to 0
* Putchar: display lettres
*/
int main(void)
{
	char lettre = 'z';

	while (lettre >= 'a')
	{
			putchar(lettre);
			lettre--;
	}
	putchar('\n');
	return (0);
}
