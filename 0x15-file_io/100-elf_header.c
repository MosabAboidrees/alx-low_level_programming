#include "main.h"
#include <elf.h>

void print_osabi_details(Elf64_Ehdr header);

/**
 * print_magic_bytes - Print the magic bytes of the ELF header
 * @header: the ELF header struct
 */
void print_magic_bytes(Elf64_Ehdr header)
{
	int idx;

	printf("  Magic:   ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", header.e_ident[idx]);
		if (idx == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_elf_class - Print the class of the ELF file
 * @header: the ELF header struct
 */
void print_elf_class(Elf64_Ehdr header)
{
	/*Check the class type and print the corresponding description*/
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASSNONE:
			printf("Invalid class");
			break;
	}
	printf("\n");
}

/**
 * print_data_encoding - Print the data encoding format of the ELF file
 * @header: the ELF header struct
 */
void print_data_encoding(Elf64_Ehdr header)
{
	/*Check the data encoding format and print the corresponding description*/
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("Invalid data encoding");
			break;
	}
	printf("\n");
}

/**
 * print_version_info - Print the version information of the ELF file
 * @header: the ELF header struct
 */
void print_version_info(Elf64_Ehdr header)
{
	/*Check the version and print the corresponding description*/
	printf("  Version:                           %d", header.e_ident[EI_VERSION]);
	switch (header.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			/*Handle the case where the version is not defined.*/
			break;
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi_details - Print the additional details of the OS/ABI
 * if not found
 * @header: the ELF header struct
 */
void print_osabi_details(Elf64_Ehdr header)
{
	/*Check for special cases of OS/ABI and print the additional details*/
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone Application");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", header.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_osabi - Print the OS/ABI information of the ELF file
 * @header: the ELF header struct
 */
void print_osabi(Elf64_Ehdr header)
{
	/*Check the OS/ABI and print the corresponding description*/
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
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
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			/*If not found, print additional details.*/
			print_osabi_details(header);
			break;
	}
	printf("\n");
}

/**
 * print_abi_version - Print the ABI version of the ELF file
 * @header: the ELF header struct
 */
void print_abi_version(Elf64_Ehdr header)
{
	/*Print the ABI version of the ELF file*/
	printf("  ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
}

/**
 * print_file_type - Print the type of the ELF file
 * @header: the ELF header struct
 */
void print_file_type(Elf64_Ehdr header)
{
	/*Check the file type and print the corresponding description*/
	char *type_ptr = (char *)&header.e_type;
	int index = 0;

	printf("  Type:                              ");
	if (header.e_ident[EI_DATA] == ELFDATA2MSB)
		index = 1;

	switch (type_ptr[index])
	{
	case ET_NONE:
		printf("NONE (None)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shard object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown>: %x", type_ptr[index]);
		break;
	}
	printf("\n");
}

/**
 * print_entry_point_address - Print the entry point address of the ELF file
 * @header: the ELF header struct
 */

void print_entry_point_address(Elf64_Ehdr header)
{
	int idx = 0, leng = 0;
	unsigned char *ptr_add = (unsigned char *)&header.e_entry;

	printf("  Entry point address:               0x");
	if (header.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		idx = header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr_add[idx])
			idx--;
		printf("%x", ptr_add[idx--]);
		for (; idx >= 0; idx--)
			printf("%02x", ptr_add[idx]);
		printf("\n");
	}
	else
	{
		idx = 0;
		leng = header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr_add[idx])
			idx++;
		printf("%x", ptr_add[idx++]);
		for (; idx <= leng; idx++)
			printf("%02x", ptr_add[idx]);
		printf("\n");
	}
}

/**
 * main - Entry point
 * @ac: The number of arguments
 * @av: The array of arguments
 * Return: Always EXIT_SUCCESS
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr header;
	ssize_t b;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	b = read(fd, &header, sizeof(header));
	if (b < 1 || b != sizeof(header))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (header.e_ident[0] == 0x7f && header.e_ident[1] == 'E' &&
			header.e_ident[2] == 'L' && header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	print_magic_bytes(header);
	print_elf_class(header);
	print_data_encoding(header);
	print_version_info(header);
	print_osabi(header);
	print_abi_version(header);
	print_file_type(header);
	print_entry_point_address(header);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
