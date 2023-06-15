#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _ctoi(char c);
char _itoc(int n);
void _reverse(char *s);
char *_add(char *s1, char *s2);
char *_sub(char *s1, char *s2);
char *_shift(char *s, int n);
char *_trim(char *s);
char **_split(char *s);
char *_karatsuba_mul(char *s1, char *s2);
int _isnumber(char *s);
void _error(void);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
