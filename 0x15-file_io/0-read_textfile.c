#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read
 * @letters: number of bytes to read and print
 *
 * Return: the number of bytes to read and prin, or 0 if there's an error/
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t no_of_bytes; /* numbero bytes to read*/
	char buf[READ_BUFFER_SIZE * 8]; /* buffer for file reading */

	/* Check if the filename or the number of letters is empty */
	if (!letters || !filename)
		return (0);
	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0); /* Return 0 if there's an error opening the file */
	/* Read the specified number of bytes from the file */
	no_of_bytes = read(fd, &buf[0], letters);
	/* Write the read content to the standard output */
	no_of_bytes = write(STDOUT_FILENO, &buf[0], no_of_bytes);
	/* Close the file descriptor*/
	close(fd);
	/* Reurn the number fbyes  to tread and printed */
	return (no_of_bytes);
}
