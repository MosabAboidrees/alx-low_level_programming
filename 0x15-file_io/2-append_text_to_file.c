#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file name
 * @text_content: content to append to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count, text_size = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* Open the file with write permissions and append to it */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* Return -1 if there's an error opening the file */
	/* Check if text_content is not NULL and append it to the file */
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
