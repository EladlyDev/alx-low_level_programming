#include "main.h"

void print_entry(Elf64_Ehdr h);
void print_type(Elf64_Ehdr h);
void print_abiversion(Elf64_Ehdr h);
void print_osabi(Elf64_Ehdr h);
void print_more_osabi(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_data(Elf64_Ehdr h);
void print_class(Elf64_Ehdr h);
void print_magic(Elf64_Ehdr h);

/**
 * main - entry point for elf reader.
 * @ac: the av length.
 * @av: the list of passed args.
 *
 * Return: 0 on succes, 98 on faliure.
 **/
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t len;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename"), exit(98);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);

	len = read(fd, &h, sizeof(h));
	if (len < 1 || len != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L'
		&& h.e_ident[3] == 'F')
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

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd);
		exit(98);
	}
	return (EXIT_SUCCESS);
}

/**
 * print_magic - prints elf magic.
 * @h: the ELF header struct
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints elf class.
 * @h: the ELF header struct
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
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
 * print_data - prints elf data.
 * @h: the ELF header struct
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Unknown data format");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian");
		break;
	}
	printf("\n");
}

/**
 * print_version - prints elf version.
 * @h: the ELF header struct
 */
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("%s", "");
		break;
	case EV_CURRENT:
		printf(" (current)");
		break;
	}
	printf("\n");
}

/**
 * print_osabi - prints elf OS/ABI.
 * @h: the ELF header struct
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V");
			break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
		break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX");
		break;
	default:
		print_more_osabi(h);
		break;
	}
	printf("\n");
}

/**
 * print_more_osabi - prints more osabi
 * @h: the elf header
 **/
void print_more_osabi(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
		break;
	case ELFOSABI_ARM:
		printf("ARM");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell - Modesto");
		break;
	case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
		break;
	default:
		printf("<unknown: %x", h.e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_abiversion - prints elf ABI Version.
 * @h: the ELF header struct
 */
void print_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		   h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints elf type.
 * @h: the ELF header struct
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (p[i])
	{
	case ET_NONE:
		printf("NONE (none)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown>: %x", p[i]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - prints elf entry.
 * @h: the ELF header struct
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}
