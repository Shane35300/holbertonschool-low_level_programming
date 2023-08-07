#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - nam of the function
 * Description: Write a function that reads a text file and prints it
 * @filename: file
 * @letters: number of letters to print
 * Return: return nmber of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fd1, r;
	ssize_t write_result;

	if (filename == NULL)
	return (0);

	fd1 = open(filename, O_RDONLY);

	if (fd1 == -1)
	return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(fd1);
		return (0);
	}

	r = read(fd1, buffer, letters);
	close(fd1);

	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';

	write_result = write(STDOUT_FILENO, buffer, r);
	free(buffer);

	if (write_result == -1 || write_result != r)
	return (0);

	return (r);
}

