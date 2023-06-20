#include "main.h"

/**
 * print_alphabet - main function
 * Description: print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}
