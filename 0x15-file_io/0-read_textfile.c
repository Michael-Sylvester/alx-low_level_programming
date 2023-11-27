#include "main.h"
/**
 * read_textfile - read a tect fileand print it's contetnts
 * @filename: pointer to the file descriptor ?
 * @letters: number of letters expected
 * Return: nothing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(letters);
	int filed = open(filename, O_RDONLY);
	int readf;
	ssize_t count;

	if (filename == NULL)
		return (0);
	if (filed == -1)
			return (0);

	readf = read(filed, buff, letters);

	if (readf == -1 || readf == 0)
	{
		free(buff);
		close(filed);
		return (0);
	}
	
	count = write(STDOUT_FILENO, buff, readf);

	free(buff);
	close(filed);
	return (count);
}

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
		{
			dprintf(2, "Usage: %s filename\n", av[0]);
			exit(1);
		}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
