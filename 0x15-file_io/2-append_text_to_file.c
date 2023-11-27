#include "main.h"
/**
 * append_text_to_file - append some text to a file
 * @filename: string of file name
 * @text_content: string to append
 * Return: 1 if pass, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed = open(filename, O_APPEND | O_WRONLY);
	int writef;

	if (filename == NULL || filed == -1)
		return (-1);

	if (text_content != NULL)
		writef = write(filed, text_content, strlen(text_content));

	if (writef == -1)
	{
		close(filed);
		return (-1);
	}

	close(filed);
	return (1);
}
