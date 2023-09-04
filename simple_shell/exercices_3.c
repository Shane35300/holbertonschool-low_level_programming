#include <stdio.h>
#include "main.h"
#include <string.h>

extern char **environ;

void print_dir_path(void)
{
	char *path_env;
	char *dir;


	path_env = _getenv("PATH"); // Utilise la fonction _getenv pour obtenir la valeur de PATH

	if (path_env != NULL)
	{
		dir = strtok(path_env, ":"); // Sépare les répertoires en utilisant ':' comme délimiteur
		while(dir != NULL)
		{
			printf("%s\n", dir); // Affiche chaque répertoire
			dir = strtok(NULL, ":"); // Passe au répertoire suivant
		}
	}
}
int main(void)
{
	print_dir_path();
	return (0);
}
