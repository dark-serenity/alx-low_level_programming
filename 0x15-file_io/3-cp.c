#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

void error_message(const char *msg, int code)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(code);
}

int main(int ac, char **av)
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[1024];

    if (ac != 3)
        error_message("Usage: cp file_from file_to", 97);

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
        error_message("Error: Can't read from file", 98);

    fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
        error_message("Error: Can't write to file", 99);

    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
            error_message("Error: Can't write to file", 99);
    }

    if (bytes_read == -1)
        error_message("Error: Can't read from file", 98);

    if (close(fd_from) == -1 || close(fd_to) == -1)
        error_message("Error: Can't close fd", 100);

    return (0);
}

