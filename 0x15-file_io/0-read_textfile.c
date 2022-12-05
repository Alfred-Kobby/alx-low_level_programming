#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - see description
 * Description: read a text file and prints it
 * @filename: input parameter for read_textfile
 * @letters: input paramter for read_textfile
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}
	fdr = read(fdo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}
	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
