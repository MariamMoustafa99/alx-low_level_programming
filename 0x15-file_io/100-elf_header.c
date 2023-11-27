#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints ELF magic bytes
 * @h: ELF header struct
 */

void print_magic(Elf64_Ehdr h)
{
	int j;
	
	printf("  Magic:   ");
	for (j = 0; j < EI_NIDENT; j++)
		printf("%2.2x%s", h.e_indent[j], j == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints ELF class
 * @h: ELF header struct
 */

void print_class(Elf64_Ehdr h)
{
	print("  Class:                             ");
	switch (h.e_indent[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - prints ELF data
 * @h: ELF header struct
 */

void print_data(Elf64_Ehdr h)
{
	print("  data:                             ");
	switch (h.e_indent[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - prints ELF version
 * @h: ELF header struct
 */

void print_version(Elf64_Ehdr h)
{
	print("  Version:                          %d", h.e_indent[EI_VERSION]);
	switch (h.e_indent[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}


/**
 * main - program
 * @ac: agrument count
 * @av: argument vector
 *
 * Return: 1 on success, 0 on failure
 */

int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t b;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		fprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	b = read(fd, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_indent[0] == 0x7f && h.e_indent[1] == 'E' && h.e_indent[2] == 'L' &&
			h.e_indent[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);

	if (close(fd))
		dprinf(STDERR_FILENO, "Error closing file decriptor: %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
