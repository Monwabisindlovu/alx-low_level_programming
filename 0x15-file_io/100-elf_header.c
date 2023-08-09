#include "main.h"

/**
 * print_os_abi - Print OS/ABI information based on the given value
 * @value: The value representing the OS/ABI in the ELF header
 *
 * This function takes a value representing the OS/ABI field in the ELF header
 * of an executable file and prints out the corresponding OS/ABI information.
 */
void print_os_abi(unsigned char value);

/**
 * main - Display ELF header information
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on success, 98 on failure
 *
 * This program reads an ELF file and prints out specific information from
 * the ELF header, such as the magic number, class, data encoding, version,
 * OS/ABI, ABI version, type, and entry point address. It is designed to be
 * used with ELF files to analyze and display relevant information.
 */
int main(int argc, char *argv[])
{
	int fd, i;
	char buf[32];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, buf, 1) != 1 || buf[0] != 0x7f || lseek(fd, 1, SEEK_SET) == -1)
		exit(98);

	read(fd, buf, 16);
	printf("ELF Header:\n");
	printf("  Magic:   7f 45 4c 46");
	for (i = 0; i < 12; i++)
		printf(" %02x", buf[i] & 0xff);
	printf("\n");

	read(fd, buf, 6);
	printf("  Class:                             ");
	printf("ELF%d\n", buf[4] == 1 ? 32 : 64);

	printf("  Data:                              ");
	printf("2's complement, %s endian\n", buf[5] == 1 ? "little" : "big");

	lseek(fd, 7, SEEK_CUR);
	read(fd, buf, 3);
	printf("  Version:                           1 (current)\n");

	printf("  OS/ABI:                            ");
	print_os_abi(buf[0]);

	printf("  ABI Version:                       %d\n", buf[1]);

	lseek(fd, 8, SEEK_CUR);
	read(fd, buf, 2);
	printf("  Type:                              ");
	printf("%s (Executable file)\n", buf[1] == 2 ? "DYN" : "EXEC");

	lseek(fd, 12, SEEK_CUR);
	read(fd, buf, 4);
	printf("  Entry point address:               0x");
	printf("%02x%02x%02x%02x\n", buf[3] & 0xff, buf[2]
			& 0xff, buf[1] & 0xff, buf[0] & 0xff);

	close(fd);
	return (0);
}

/**
 * print_os_abi - Print OS/ABI information based on the given value
 * @value: The value representing the OS/ABI in the ELF header
 *
 * This function takes a value representing the OS/ABI field in the ELF header
 * of an executable file and prints out the corresponding OS/ABI information.
 */
void print_os_abi(unsigned char value)
{
	switch (value)
	{
	case 0:
		printf("UNIX - System V\n");
		break;
	case 1:
		printf("UNIX - HPUX\n");
		break;
	case 2:
		printf("UNIX - NetBSD\n");
		break;
	case 3:
		printf("UNIX - Linux\n");
		break;
	case 6:
		printf("UNIX - Solaris\n");
		break;
	case 7:
		printf("UNIX - AIX\n");
		break;
	case 8:
		printf("UNIX - IRIX\n");
		break;
	case 9:
		printf("UNIX - FreeBSD\n");
		break;
	case 10:
		printf("UNIX - Tru64\n");
		break;
	case 11:
		printf("UNIX - Novell Modesto\n");
		break;
	case 12:
		printf("UNIX - OpenBSD\n");
		break;
	case 13:
		printf("UNIX - OpenVMS\n");
		break;
	case 14:
		printf("UNIX - NonStop Kernel\n");
		break;
	case 15:
		printf("UNIX - AROS\n");
		break;
	case 16:
		printf("UNIX - Fenix OS\n");
		break;
	case 17:
		printf("UNIX - CloudABI\n");
		break;
	default:
		printf("<unknown: %d>\n", value);
break;
	}
}

