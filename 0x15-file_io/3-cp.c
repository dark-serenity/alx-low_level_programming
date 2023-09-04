#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - Print an error message and exit with a specific code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Entry point. Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	char *file_from = argv[1];
	char *file_to = argv[2];

	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file");
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to file");
		}
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file");
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd");
	}

	return (0);
}

