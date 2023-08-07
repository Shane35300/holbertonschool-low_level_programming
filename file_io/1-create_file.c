#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * create_file - name of the function
 * Description: create a file
 * @filename: file
 * @text_content: text content
 * Return: return 1 if it success
*/
int create_file(const char *filename, char *text_content)
{
	int fd, fdW;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		fdW = write(fd, text_content, strlen(text_content));
		close(fd);

		if (fdW == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}


