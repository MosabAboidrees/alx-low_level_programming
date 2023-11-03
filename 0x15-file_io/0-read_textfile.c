#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read
 * @letters: number of bytes to read and print
 *
 * Return: the number of bytes to read and prin, or 0 if there's an error/
 */
ssize_tread_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t bytes; /* numbero bytes rea */
	char buf[READ_BUFFER_SIZE * 8] fd; /* buffer for file reading */
	/* Check if the filename or the number of letters is empty */
	if (filename == NULL || letters == NULL)
		return (0);
	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0); /* Return 0 if there's an error opening the file */
	/* Read the specified number of bytes from the file */
	bytes = read(fd, &buf[0], letters);
	/* Write the read content to the standard output */
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	/* Close the file descriptor*/
	close(fd);
	/* Reurn the number fbyes  to tread and printed */
	return (bytes);
}
