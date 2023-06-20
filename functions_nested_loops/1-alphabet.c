#include "main.h"

/**
 * main - main function
 * Return: On success 1.
 */
int main(void)
/* putchar means putchar*/
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
	return (0);
}
