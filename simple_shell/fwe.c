#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    for (int i = 0; i < 5; i++) {
        pid_t child_pid = fork(); // Crée un nouveau processus

        if (child_pid == -1) {
            perror("fork failed"); // Affiche un message d'erreur si fork échoue
            exit(1);               // Quitte le programme en cas d'erreur
        } else if (child_pid == 0) {
            // Ceci est le processus enfant
            char *argv[] = {"/bin/ls", "-l", "/tmp", NULL}; // Les arguments pour execve
            execve("/bin/ls", argv, NULL);                   // Exécute la commande en utilisant execve
            perror("execve failed");                         // Affiche un message d'erreur si execve échoue
            exit(1);                                         // Quitte le processus enfant en cas d'erreur
        } else {
            // Ceci est le processus parent
            int status;
            wait(&status); // Attend que le processus enfant se termine
        }
    }

    return 0;
}
