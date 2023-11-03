#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with specific permissions and writes to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_count, text_size = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* Open the file with specific permissions and*/
	/* truncate if it already exists*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* Return -1 if there's an error creating the file */
	/* Check if text_content is not NULL and write to the file */
	if (text_content != NULL)
	{
		/* Calculate the size of the text content */
		while (text_content[text_size])
			text_size++;
		/* Write the text content to the file */
		write_count = write(fd, text_content, text_size);
		if (write_count == -1)
		{
			close(fd);
			return (-1); /* Return -1 if there's an error writing to the file */
		}
	}
	/* Close the file descriptor */
	close(fd);
	/* Return 1 on success */
	return (1);
}
