#include "main.h"
/**
 * _strlen - strlen
 * Description : strlen function
 * Return: return
 * @s: pointer
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}

	return (longueur);
}
