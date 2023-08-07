#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/* Function prototypes */

/* _putchar.c */
int _putchar(char c);

/* 0-read_textfile.c */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1-create_file.c */
int create_file(const char *filename, char *text_content);

/* 2-append_text_to_file.c */
int append_text_to_file(const char *filename, char *text_content);

/* 3-cp.c */
int cp(const char *file_from, const char *file_to);

/* 100-elf_header.c */
int elf_header(const char *elf_filename);

#endif /* MAIN_H */

