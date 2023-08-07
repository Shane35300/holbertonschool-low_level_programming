#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file - name of the function
 * Description: append some text at the end of a file
 * @filename: file
 * @text_content: text content
 * Return: return 1 if it success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);

	return (1);
}

