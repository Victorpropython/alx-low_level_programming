#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Program that copies the content of a file to another file
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fdo, fdw;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STD_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		perror("Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)

	fdo = open(argv[1], O_RDONLY);
	fdr = read(fdo, 


