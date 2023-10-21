#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to be added
 * Return: 1 on succes, -1 on failure || filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, content_len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		if (filename)
			return (1);
		else
			return (-1);
	}

	content_len = strlen(text_content);

	fdo = open(filename, O_WRONLY | O_APPEND);
	fdw = write(fdo, text_content, content_len);

	if (fdo < 0 || fdw < 0)
		return (-1);
	close(fdo);
	return (1);
}
