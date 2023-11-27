#include "main.h"
/**
 *write_file - writes a string into a file
 * @filename: name of the file to write to
 * @text_content: string to write to the file
 * Return: number of characters written
 */
int write_file(const char *filename, char *text_content)
{
	int filed = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	int writef;
	int closef;

	if (filename == NULL || filed == -1)
	{
		dprintf(2, "Can't write to %s\n", filename);
		exit(99);
	}

	if (text_content == NULL)
		writef = write(filed, "", 0);
	else
		writef = write(filed, text_content, strlen(text_content));

	if (writef == -1)
	{
		close(filed);
		dprintf(2, "Can't write to %s\n", filename);
		exit(99);
	}

	closef = close(filed);
	if (closef == -1)
	{
		dprintf(2, "Error: Can't close fd %d", filed);
		exit(100);
	}
	return (1);
}

/**
 *read_file - reads the content of a file and stores it as a string;
 * @filename: name of the file to write to
 * @
 * Return: Pointer to string buffer
 */
char *read_file(const char *filename)
{
	char *buff = malloc(1024);
	int filed = open(filename, O_RDONLY);
	int readf;
	int closef;

	if (filename == NULL)
		return (0);
	if (filed == -1)
		return (0);

	readf = read(filed, buff, 1024);

	if (readf == -1 || readf == 0)
	{
		free(buff);
		close(filed);
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	closef = close(filed);
	if (closef == -1)
	{
		dprintf(2, "Error: Can't close fd %d", filed);
		exit(100);
	}
	return (buff);
}

/**
 * main - check the code
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;
	char *content = NULL;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	content = read_file(av[1]);
	res = write_file(av[2], content);
	printf("-> %i)\n", res);
	return (0);
}
