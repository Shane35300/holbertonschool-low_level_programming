#include "main.h"
/**
 * display_prompt - displays the prompt
 * Return: void
 */
/* Affiche le prompt */
void display_prompt(void)
{
	printf("$ "); /* Affiche le prompt */
}

/* Exécute la commande en créant un nouveau processus */
/**
 * execute_command - execute the command
 * @command : the command
 * Return: void
 */
void execute_command(char *command)
{
	pid_t child_pid;
	int status;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork failed");
		exit(1);
	}
	else if (child_pid == 0)
	{
		if_executable(char *exe, char **argv);
	}
	else
		/* Attends que le processus enfant se termine*/
		waitpid(child_pid, &status, 0);
}
