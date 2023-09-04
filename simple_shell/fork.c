
#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t pid;

    printf("Before fork\n");
    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (pid == 0)
    printf("chez l'enfant: %d\n", pid);
    if (pid == 0)
    printf("je suis un GAMIN");

    if (pid != 0)
    printf("Je suis un DARON");

    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}
