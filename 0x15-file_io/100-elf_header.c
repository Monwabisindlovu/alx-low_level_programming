#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 64

struct MyElf64_Ehdr
{
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
};

/**
 * print_error - Prints an error message to stderr and
 * exits with status code 98.
 * @error_message: The error message to print.
 */
void print_error(const char *error_message)
{
fprintf(stderr, "%s\n", error_message);
exit(98);
}

/**
 * print_magic - Prints the ELF magic numbers.
 * @e_ident: The ELF identification array.
 */
void print_magic(const unsigned char *e_ident)
{
int i;

printf("  Magic:   ");
for (i = 0; i < 16; i++)
printf("%02x ", e_ident[i]);
printf("\n");
}

/**
 * print_class - Prints the ELF class.
 * @e_ident_class: The ELF class value.
 */
void print_class(uint8_t e_ident_class)
{
const char *class_str;
switch (e_ident_class)

{
case 1:
class_str = "ELF32";
break;
case 2:
class_str = "ELF64";
break;
default:
class_str = "<unknown>";
break;

}
printf("  Class:   %s\n", class_str);
}

/**
 * print_data - Prints the ELF data encoding.
 * @e_ident_data: The ELF data encoding value.
 */
void print_data(uint8_t e_ident_data)
{
const char *data_str;
switch (e_ident_data)
{
case 1:
data_str = "2's complement, little endian";
break;
case 2:
data_str = "2's complement, big endian";
break;
default:
data_str = "<unknown>";
break;
}
printf("  Data:   %s\n", data_str);
}

/**
 * display_elf_header - Displays information about an ELF header.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header(struct MyElf64_Ehdr *header)
{
ssize_t bytes_read;

if (header->e_ident[EI_MAG0] != ELFMAG0 ||
header->e_ident[EI_MAG1] != ELFMAG1 ||
header->e_ident[EI_MAG2] != ELFMAG2 ||
header->e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Error: Not an ELF file");
}

printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident[EI_CLASS]);
print_data(header->e_ident[EI_DATA]);
printf("\n");

bytes_read = read(STDIN_FILENO, header, sizeof(*header));
if (bytes_read < 0)
{
print_error("Error reading from file");
}
if (bytes_read < (ssize_t)sizeof(*header))
{
print_error("File too small");
}
}

int main(void)
{
struct MyElf64_Ehdr header;

display_elf_header(&header);

return (0);
}

