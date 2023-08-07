0x15. File Descriptors and Permissions
This repository contains C programs that demonstrate file I/O operations using file descriptors on Linux systems. The programs were developed and compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.

Files and Descriptions
0-read_textfile.c: This file contains a function that reads a text file and prints its content to the standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
filename: The name of the text file to read.
letters: The number of letters to read from the file and print.
Return: The actual number of letters read and printed. If the file cannot be opened or read, or if filename is NULL, return 0. If the write operation fails, return 0.
1-create_file.c: This file contains a function that creates a new file and writes text content to it.

Prototype: int create_file(const char *filename, char *text_content);
filename: The name of the file to create.
text_content: The NULL-terminated string to write to the file.
Return: 1 on success, -1 on failure. If the file cannot be created or written, or if filename is NULL, return -1. If text_content is NULL, create an empty file.
2-append_text_to_file.c: This file contains a function that appends text content to an existing file.

Prototype: int append_text_to_file(const char *filename, char *text_content);
filename: The name of the file to which to append.
text_content: The NULL-terminated string to append to the file.
Return: 1 on success, -1 on failure. If the file does not exist or cannot be written, or if filename is NULL, return -1. If text_content is NULL, do not append anything to the file.
3-cp.c: This file contains a program that copies the content of one file to another.

Usage: cp file_from file_to
Return: 0 on success, 97 on incorrect number of arguments, 98 on inability to read file_from, 99 on inability to write to file_to, 100 on inability to close a file descriptor.
100-elf_header.c: This file contains a program that displays information about the ELF header of an ELF file.

Usage: elf_header elf_filename
Displayed information: Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address.
Return: 0 on success, 98 on invalid ELF file, or other error.
