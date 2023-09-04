#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork failed");
		exit(1);
    }
	else if (child_pid == 0)
	{
		// This is the child process
		char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
		printf("Child process (PID: %d) executing ls -l /usr/\n", getpid());
		execve(argv[0], argv, NULL);
		perror("execve failed"); // Executed only if execve fails
		exit(1);
    }
	else
	{
        // This is the parent process
        printf("Parent process (PID: %d, Child PID: %d)\n", getpid(), child_pid);
        int status;
        waitpid(child_pid, &status, 0); // Wait for the child to exit
        printf("Child process (PID: %d) exited\n", child_pid);
    }

    printf("Parent process continues executing...\n");
    return 0;
}






