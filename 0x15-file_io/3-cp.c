#include "main.h"

#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define E_N_READ "Error: Can't read from file %s\n"
#define E_N_WRITE "Error: Can't write to %s\n"
#define E_N_CLOSE "Error: Can't close fd %d\n"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:0 n success, or an exit code on failure
 */
int main(int argc, char **argv)
{
	int file_from = 0, file_to = 0;
	ssize_t  read_count;
	char buffer[READ_BUFFER_SIZE];

	/* Check the number of arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	/* Open the source file for reading */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, E_N_READ, argv[1]), exit(98);

	/* Open or create the destination file for writing */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (file_to == -1)
		dprintf(STDERR_FILENO, E_N_WRITE, argv[2]), exit(99);

	/* Copy the content from source file to the destination file */
	while ((read_count = read(file_from, buffer, READ_BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, read_count) != read_count)
		{
			dprintf(STDERR_FILENO, E_N_WRITE, argv[2]), exit(99);
		}
	}
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, E_N_READ, argv[1]), exit(98);
	}
	file_from = close(file_from), file_to = close(file_to);
	if (file_from == -1)
		dprintf(STDERR_FILENO, E_N_CLOSE, file_from), exit(100);
	if (file_to == -1)
		dprintf(STDERR_FILENO, E_N_CLOSE, file_from), exit(100);

	return (EXIT_SUCCESS);
}
