/**
 * main - simple shell
 * Return: void
*/
int main(void)
{
	ssize_t read;
	size_t len;
	char *command;
	while (1)
	{
		if (isatty(STDIN_FILENO))
			display_prompt();
		/* Lire la commande depuis l'utilisateur ou depuis un fichier/redirection*/
		if (isatty(STDIN_FILENO))
			command = read_command();
		else
		{
			len = MAX_COMMAND_LENGTH;
			command = (char *)malloc(len * sizeof(char));
			if (command == NULL)
			{
				perror("malloc a échoué");
				exit(1);
			}
			read = getline(&command, &len, stdin);
			if (read == -1)
			{
				free(command);
				if (!isatty(STDIN_FILENO))
				{
					break;
				} /* Fin de fichier atteinte*/
				else
				{
					perror("getline a échoué");
					exit(1);
				}
			}
			if (read > 0 && command[read - 1] == '\n')
				command[read - 1] = '\0';
		}
		/* Exécuter la commande seulement si elle n'est pas vide */
		if (command[0] != '\0')
			execute_command(command);
		free(command); /* Libérer la mémoire */
	}
	return (0);
}

