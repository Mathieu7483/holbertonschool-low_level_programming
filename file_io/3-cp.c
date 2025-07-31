#include "main.h"
/**
* copy_file - program that copies the content of a file to another file.
* @file_from: The source file name.
* @file_to: The destination file name.
* Return: 0 on success, exits with error code on failure
*/
int copy_file(int *file_from, char *file_to)
{
	int fileD_from, fileD_to, read_result, write_result;
	char buffer[1024];

	fileD_from = open(file_from, O_RDONLY);
	if (fileD_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fileD_to = open(file_from, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileD_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((read_result = read(fileD_from, buffer, 1024)) > 0)
	{
		write_result = write(fileD_to, buffer, read_result);
		if (write_result != read_result)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fileD_from);
			close(fileD_to);
			exit(99);
		}
	}
	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fileD_from);
		close(fileD_to);
		exit(98);
	}
	if (close(fileD_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileD_from);
		exit(100);
	}

	if (close(fileD_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileD_to);
		exit(100);
	}
	return (0);
}

/**
* main - Copies the content of a file to another file.
* @ac: The number of arguments passed to the program.
* @file_from: An array of strings representing the command-line arguments.
*Return: copy file
*/
int main(int ac, char **file_from)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	return (0);
}
