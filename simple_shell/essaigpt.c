#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100

int main()
{
while (1)
{
printf("$ "); // Affiche le prompt

        // Utilisation de getline pour lire l'entrée de l'utilisateur
        char *command = NULL;
        size_t len = 0;
        ssize_t read;

        read = getline(&command, &len, stdin);

        if (read == -1)
        {
            perror("getline failed");
            exit(1);
        }

        // Supprime le caractère de saut de ligne à la fin de la commande
        if (read > 0 && command[read - 1] == '\n')
        {
            command[read - 1] = '\0';
        }

        pid_t child_pid = fork(); // Crée un nouveau processus

        if (child_pid == -1)
        {
            perror("fork failed"); // Affiche un message d'erreur si fork échoue
            exit(1);               // Quitte le programme en cas d'erreur
        }
        else if (child_pid == 0)
        {
            // Ceci est le processus enfant
            char *argv[] = {"/bin/sh", "-c", command, NULL}; // Les arguments pour execve
            execve("/bin/sh", argv, NULL);                   // Exécute la commande en utilisant le shell
            perror("execve failed");                         // Affiche un message d'erreur si execve échoue
            exit(1);                                         // Quitte le processus enfant en cas d'erreur
        }
        else
        {
            // Ceci est le processus parent
            int status;
            wait(&status); // Attend que le processus enfant se termine
        }

        free(command); // Libère la mémoire allouée par getline
    }

    return 0;
}
