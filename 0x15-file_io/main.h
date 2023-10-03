#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file(int fd);
char *create_buffer(void);
int read_write(const char *file_from, const char *file_to);
char *reallocate_buffer(char *ptr, size_t size);
#endif
