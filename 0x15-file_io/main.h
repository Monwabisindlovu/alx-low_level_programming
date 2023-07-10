#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
int putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

