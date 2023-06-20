#include "main.h"

/**
 * print_alphabet_x10 - main function
 * Description: print_alphabet_x10 - print the alphabet twice
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		char lettre = 'a';

		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
	}
}

