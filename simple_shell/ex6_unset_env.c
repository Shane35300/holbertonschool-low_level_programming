#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _unsetenv(const char *name)
{
	int index_to_remove = -1;
	int i;

	if (name == NULL)
	return (-1);
	/*Recherche de l'indice de la variable à supprimer*/
	for (i = 0 ; environ[i] != 0 ; i++)
	{
		if (strncmp(name, environ[i], strlen(name)) == 0)
		{
			index_to_remove = i;
			break;
		}
	}
	if (index_to_remove == -1) /*si la variable n'existe pas il n'y a rien à faire*/
	return (0);

	/*Liberer la mémoire de la variable à supprimer*/
	free(environ[index_to_remove]);
	/*Décaler les pointeur pour combler la variable libérée*/
	for (i = index_to_remove ; environ[i] != NULL ; i++)
	{
		environ[i] = environ[i + 1];
	}
	return (0);
}
int main()
{
	int i;

	_setenv("MY_VARIABLE", "12345", 1);
	_setenv("ANOTHER_VARIABLE", "hello", 0);

	_unsetenv("MY_VARIABLE");

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}

	return 0;
}
