#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - function main
 * Description: copies the content of a file to another file
 * @argc: nbre of arguments
 * @argv: array of arguments
 * Return: renvoi 0
*/
int main(int argc, char *argv[])
{
	int fd_source, fd_destination, octets_lus, octets_ecrits;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_destination = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((octets_lus = read(fd_source, buffer, 1024)) > 0)
	{
		octets_ecrits = write(fd_destination, buffer, octets_lus);

		if (octets_lus == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (octets_ecrits == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd_source) == -1 || close(fd_destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}
