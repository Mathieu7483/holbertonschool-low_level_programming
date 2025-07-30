#include "main.h"
/**
*read_textfile  - function that reads a text file
*and prints it to the POSIX standard output.
*@filename: pointer to the file to read.
*@letters: the number of letters it should read and print.
*Return: the actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int length, writechar;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	length = read(file, buffer, letters);
	if (length == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	writechar = write(STDOUT_FILENO, buffer, length);

	free(buffer);
	close(file);
	if (writechar != length)
		return (0);
	return (length);
}
