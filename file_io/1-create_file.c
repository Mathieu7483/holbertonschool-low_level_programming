#include "main.h"
/**
*_strlen - calculate the length of a string
*@s: string of character
* Return: Length of a string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length])
{
length++;
}
return (length);
}


#include "main.h"
/**
*create_file - function that creates a file
*@filename:  name of the file to create.
*@text_content: NULL terminated string to write to the file
*Return: 1 on success, -1 on failure (file can not be created,
*file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fileD, writtenBytes;

	if (filename == NULL)
	return (-1);

fileD = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (fileD == -1)
	{
		return (-1);
	}

if (text_content != NULL)
{
	writtenBytes = write(fileD, text_content, _strlen(text_content));
		if (writtenBytes == -1)
		{
			close(fileD);
			return (-1);
		}
}
close(fileD);
return (1);
}
