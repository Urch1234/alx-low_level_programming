#include "main.h"

/**
 * create_file - creates a file and writes content to it
 * @filename: name of the file
 * @text_content: content to be written to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rwr;

	/* Check if filename is NULL */
	if (!filename)
		return (-1);

	/* Open the file with specific flags and permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Check if opening the file failed */
	if (fd == -1)
		return (-1);

	/* Check if text_content is not NULL */
	if (text_content)
	{

		/* Write the content to the file */
		rwr = write(fd, text_content, strlen(text_content));

		/* Check if writing to the file failed */
		if (rwr == -1)
		{
			/* Close the file descriptor and return -1 */
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(fd);

	/* Return 1 to indicate success */
	return (1);
}
