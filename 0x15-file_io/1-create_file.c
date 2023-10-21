
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - A function that creates file
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, content_len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content != NULL && text_content[content_len] != '\0')
		content_len++;

	fdo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fdw = write(fdo, text_content, content_len);

	if (fdo == -1 || fdw == -1)
		return (-1);
	close(fdo);

	return (1);
}
