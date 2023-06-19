#include <stdio.h>
/**
* main - main function
* Return: return to 0
* Putchar: display lettres
*/
int main(void)
{
	char lettrea = 'a';
	char lettref = 'f';
	char lettrer = 'r';

	while (lettrea <= 'd')
	{
			putchar(lettrea);
			lettrea++;
	}
	while (lettref <= 'p')
	{
		putchar(lettref);
		lettref++;
	}
	while (lettrer <= 'z')
	{
		putchar(lettrer);
		lettrer++;
	}
	putchar('\n');
	return (0);
}
