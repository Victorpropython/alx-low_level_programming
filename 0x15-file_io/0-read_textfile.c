#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file  to be read
 * @letters: number of letters it should read and print
 * Return: Actual number of letters read,
 * 0 if file name is NULL or on failure to read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdr, fdw, fdo;
	char *new_string;

	if (filename == NULL)
		return (0);

	new_string = malloc(sizeof(char) * letters);
	if (new_string == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	fdr = read(fdo, new_string, letters);
	fdw = write(STDOUT_FILENO, new_string, fdr);

	if (fdo == -1 || fdr == -1 || fdw == -1 || fdw != fdr)
	{
		free(new_string);
		return (0);
	}
	free(new_string);
	close(fdo);

	return (fdw);
}
