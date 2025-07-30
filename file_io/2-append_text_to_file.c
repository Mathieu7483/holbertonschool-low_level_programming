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
*append_text_to_file - function that appends text at the end of a file.
*@filename: the name of the file.
*@text_content: the NULL terminated string to add at the end of the file
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fileD, writtenBytes;

	if (filename == NULL)
	return (-1);

fileD = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0664);
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
