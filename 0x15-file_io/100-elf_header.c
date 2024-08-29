#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * print_error - Prints an error message to stderr and exits with status 98.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Reads and prints the ELF header information.
 * @filename: The name of the ELF file to read.
 */
void print_elf_header(const char *filename)
{
	int fd;
    int i = 0;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		print_error("Error: Cannot read ELF header");
	}

	/* Check the ELF magic number */
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		print_error("Error: Not an ELF file");
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}

	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}

	printf("  Version:                           %d (current)\n",
		header.e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
			break;
	}

	printf("  ABI Version:                       %d\n",
		header.e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown type\n");
			break;
	}

	printf("  Entry point address:               0x%lx\n",
		(unsigned long) header.e_entry);

	close(fd);
}

/**
 * main - The main entry point of the program.
 * @argc: The number of arguments.
 * @argv: The array of argument strings.
 *
 * Return: 0 on success, otherwise exits with status 98 on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	print_elf_header(argv[1]);

	return (0);
}
