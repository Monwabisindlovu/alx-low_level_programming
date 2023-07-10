#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - Prints information from ELF header
 * @header: Pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
{
printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\nClass:   %d-bit\n", (header->e_ident[EI_CLASS] == ELFCLASS32)
? 32 : 64);
printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
? "2's complement, little endian"
: "2's complement, big endian");
printf("Version:   %d\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV)
? "UNIX System V ABI" : "Other");
printf("ABI Version:    %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:     %d\n", header->e_type);
printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
exit(98);
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Cannot open file '%s'\n", argv[1]);
exit(98);
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", argv[1]);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: File '%s' is not an ELF file\n", argv[1]);
exit(98);
}


print_elf_header(&header);

close(fd);

return (0);
}

