#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int fd);
/**
 * print_magic - Print the magic bytes of the ELF header.
 * @e_ident: Pointer to the ELF identification bytes.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;
    ssize_t read_bytes;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    read_bytes = read(fd, &header, sizeof(header));
    if (read_bytes == -1 || read_bytes != sizeof(header))
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        close_elf(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_class(header.e_ident);
    print_data(header.e_ident);
    print_version(header.e_ident);
    print_osabi(header.e_ident);
    print_abi(header.e_ident);
    print_type(header.e_type, header.e_ident);
    print_entry(header.e_entry, header.e_ident);

    close_elf(fd);
    return 0;
}
/**
 * print_class - Print the class (32-bit or 64-bit) of the ELF file.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_magic(unsigned char *e_ident)
{
    printf("Magic:");
    for (int i = 0; i < EI_NIDENT; i++)
        printf(" %02x", e_ident[i]);
    printf("\n");
}
/**
 * print_data - Print the data encoding (endianess) of the ELF file.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_class(unsigned char *e_ident)
{
    printf("Class: ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_CLASS]); break;
    }
}
/**
 * print_version - Print the version of the ELF file.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_data(unsigned char *e_ident)
{
    printf("Data: ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATANONE: printf("none\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_DATA]); break;
    }
}

/**
 * print_osabi - Print the OS/ABI (operating system/application binary interface)
 * of the ELF file.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_version(unsigned char *e_ident)
{
    printf("Version: %d", e_ident[EI_VERSION]);
    switch (e_ident[EI_VERSION])
    {
        case EV_CURRENT: printf(" (current)\n"); break;
        default: printf("\n"); break;
    }
}
/**
 * print_abi - Print the ABI version of the ELF file.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_osabi(unsigned char *e_ident)
{
    printf("OS/ABI: ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_OSABI]); break;
    }
}
/**
 * print_type - Print the type of the ELF file
 * (e.g., executable, shared object, core file).
 * @e_type: The ELF file type.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_abi(unsigned char *e_ident)
{
    printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * print_entry - Print the entry point address of the ELF file.
 * @e_entry: The entry point address.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
    printf("Type: ");
    switch (e_type)
    {
        case ET_NONE: printf("NONE (Unknown type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("<unknown: %x>\n", e_type); break;
    }
}
/**
 * close_elf - Close the file descriptor used for the ELF file.
 * @fd: File descriptor to close.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("Entry point address: 0x%x\n", (unsigned int)e_entry);
    else if (e_ident[EI_CLASS] == ELFCLASS64)
        printf("Entry point address: 0x%lx\n", e_entry);
    else
        printf("Entry point address: <unknown>\n");
}

void close_elf(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(98);
    }
}

