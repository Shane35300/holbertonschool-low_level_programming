#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main - function
 * Description - give access to a shell
 * Return: return
*/
int main(void)
{
	pid_t pid;

	char command[1024];

	while (1)
	{
		printf("$ ");

		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			printf("\n");
			break; /* End of file (Ctrl+D) */
		}
		command[strlen(command) - 1] = '\0'; /* Remove the newline character*/

		pid = fork();

		if (pid == 0)
		{
			/* Child process*/
			char *args[] = {command, NULL};

			char *envp[] = {NULL}; /*Laisser l'environnement inchangé*/

			execve(command, args, envp);
			fprintf(stderr, "./shell: %s: command not found\n", command);
			exit(1);
		}
		else if (pid > 0)
		{
			/* Parent process*/
			wait(NULL);
		}
		else
		{
			perror("fork");
			exit(1);
		}
	}
	return (0);
}
