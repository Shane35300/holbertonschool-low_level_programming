#include "main.h"
/**
 * _strlen_recursion - fonction name
 * Description: print a string
 * @s: string
 * Return: return lenght
*/
int _strlen_recursion(char *s)
{
	int longueur = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + longueur);
}
