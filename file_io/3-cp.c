#include "main.h"
/**
*_strcmp - compare the string
*@s1: source tab
*@s2: dest tab
*Return: value of comp
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2 && *s1 != '\0')
++s1, ++s2;
return (*s1 - *s2);
}

/**
* copy_file - program that copies the content of a file to another file.
* @ac: arguments count
* @av: array of arguments.
* Return: 0 on success, exits with error code on failure
*/
int copy_file(int ac, char **av)
{
	int fileD_from, fileD_to, read_result, write_result;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (_strcmp(av[1], av[2]) == 0)
	{
		return (0);
	}
	fileD_from = open(av[1], O_RDONLY);
	if (fileD_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fileD_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileD_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fileD_from)
		exit(99);
	}
	while ((read_result = read(fileD_from, buffer, 1024)) > 0)
	{
		write_result = write(fileD_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fileD_from);
			close(fileD_to);
			exit(99);
		}
	}
	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
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
* main - main function
*@ac:ac
*@av:av
*Return: copy file
*/
int main(int ac, char **av)
{
	return (copy_file(ac, av));
}
