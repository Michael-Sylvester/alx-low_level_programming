#include "main.h"
/**
 *create_file - create a file and fill it with text
 * @filename: tring with the ame of the file
 * @text_content: the string to be placed in the file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int filed = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	int writef;

	if (filename == NULL || filed == -1)
		return (-1);
	
	if (text_content == NULL)
		writef = write(filed, "", 0);
	else
		writef = write(filed, text_content, strlen(text_content));

	if (writef == -1)
	{
		close(filed);
		return (-1);
	}

	close(filed);
	return (1);
}
