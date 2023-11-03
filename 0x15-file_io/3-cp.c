#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_count, write_count;
	char buffer[1024];

	if (argc != 3) /* Check the number of arguments*/
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	file_from = open(argv[1], O_RDONLY); /*Open the source file for reading*/
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	/* Open or create the destination file for writing */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	/* Copy the content from source file to the destination file */
	while ((read_count = read(file_from, buffer, 1024)) > 0)
		write_count = write(file_to, buffer, read_count);
		if (write_count != read_count)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from), close(file_to), exit(99);
	if (close(file_from) == -1) /* Clos the file descriptors */
		dprintfSTDERRe(_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	return (0);
}
