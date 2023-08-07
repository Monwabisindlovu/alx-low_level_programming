#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

/* Structure for ELF header */
typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

/* Function to print the Magic number */
void print_magic(const unsigned char *e_ident) {
    printf("  Magic:   ");
    for (int i = 0; i < 16; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

/* Function to print the ELF class */
void print_elf_class(uint8_t e_class) {
    printf("  Class:                             ");
    switch (e_class) {
        case 0: printf("None\n"); break;
        case 1: printf("ELF32\n"); break;
        case 2: printf("ELF64\n"); break;
        default: printf("Unknown\n");
    }
}

/* Function to print the Data encoding */
void print_elf_data(uint8_t e_data) {
    printf("  Data:                              ");
    switch (e_data) {
        case 0: printf("None\n"); break;
        case 1: printf("2's complement, little endian\n"); break;
        case 2: printf("2's complement, big endian\n"); break;
        default: printf("Unknown\n");
    }
}

/* Function to print the ELF version */
void print_elf_version(uint8_t e_version) {
    printf("  Version:                           ");
    switch (e_version) {
        case 0: printf("None\n"); break;
        case 1: printf("1 (current)\n"); break;
        default: printf("Unknown\n");
    }
}

/* Function to print the OS/ABI */
void print_elf_osabi(uint8_t e_osabi) {
    printf("  OS/ABI:                            ");
    switch (e_osabi) {
        case 0: printf("UNIX - System V\n"); break;
        case 1: printf("HP-UX\n"); break;
        case 2: printf("NetBSD\n"); break;
        case 3: printf("Linux\n"); break;
        case 6: printf("Solaris\n"); break;
        case 7: printf("AIX\n"); break;
        case 8: printf("IRIX\n"); break;
        case 9: printf("FreeBSD\n"); break;
        case 10: printf("Tru64\n"); break;
        case 11: printf("Novell Modesto\n"); break;
        case 12: printf("OpenBSD\n"); break;
        case 13: printf("OpenVMS\n"); break;
        case 14: printf("NonStop Kernel\n"); break;
        case 15: printf("AROS\n"); break;
        case 16: printf("Fenix OS\n"); break;
        case 17: printf("CloudABI\n"); break;
        default: printf("Unknown\n");
    }
}

/* Function to print the ELF type */
void print_elf_type(uint16_t e_type) {
    printf("  Type:                              ");
    switch (e_type) {
        case 0: printf("NONE (None)\n"); break;
        case 1: printf("REL (Relocatable file)\n"); break;
        case 2: printf("EXEC (Executable file)\n"); break;
        case 3: printf("DYN (Shared object file)\n"); break;
        case 4: printf("CORE (Core file)\n"); break;
        default: printf("Unknown\n");
    }
}

int main(int argc, char **argv) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return 98;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        close(fd);
        return 98;
    }

    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_elf_class(header.e_ident[4]);
    print_elf_data(header.e_ident[5]);
    print_elf_version(header.e_ident[6]);
    print_elf_osabi(header.e_ident[7]);
    printf("  ABI Version:                       %d\n", header.e_ident[8]);
    print_elf_type(header.e_type);
    printf("  Entry point address:               0x%lx\n", header.e_entry);

    close(fd);
    return 0;
}

