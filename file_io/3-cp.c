#include "main.h"
/**
 * copy_file - program that copies the content of a file to another file.
 * @ac: arguments count
 * @av: array of arguments.
 * Return: 0 if okay, -1 if error
 */
int copy_file(int ac, char **av)
{
    int fd_from, fd_to, read_result, write_result;
    char buffer[1024];
    mode_t permissions = 0664;

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        exit(99);
    }

    while ((read_result = read(fd_from, buffer, 1024)) > 0)
    {
        write_result = write(fd_to, buffer, read_result);
        if (write_result == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
            exit(99);
        }
    }

    if (read_result == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    if (close(fd_from) == -1 || close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n");
        exit(100);
    }

    return (0);
}
