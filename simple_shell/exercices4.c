#include <stdio.h>
#include "main.h"
#include <string.h>

extern char **environ;

list_t *path_linked_list(void)
{
	char *path_env;
	char *dir;
	list_t *head;

	head = NULL;
	path_env = _getenv("PATH"); /* Utilise la fonction _getenv pour obtenir la valeur de PATH*/

	if (path_env != NULL)
	{
		dir = strtok(path_env, ":"); /* Sépare les répertoires en utilisant ':' comme délimiteur*/
		while(dir != NULL)
		{
			add_node(&head, dir);
			dir = strtok(NULL, ":"); /* Passe au répertoire suivant*/
		}
	}
	return (head);
}
int main()
{
	list_t *head;

	head = path_linked_list();
	print_list(head);

	return (0);
}
