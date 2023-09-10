#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_grid(char **grid, int height);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_mul(char **ptr, int len1, int len2);
char *spr(char *ptr, int len);
char *infinite_mul(char *num1, char *num2, char **ptr, int l1, int l2);
char *_mul(char *num1, char *num2);

#endif
