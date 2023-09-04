#include <stdio.h>
#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	ssize_t fd1, fd2, fd3;
	char *buffer;

	if (filename == NULL)
	return (-1);

	fd1 = open(filename, O_CREAT | O_WRONLY, 600);
	if (fd1 == -1)
	return (-1);

	if (text_content != NULL)
	{
		fd3 = write(fd1, text_content, strlen(text_content));
		if (fd3 == -1)
		return (-1);

	return (1);
}
