#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned long int _pow_recursion(int x, int y);
void print_binary(unsigned long int n);
char *binary_buff(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
char *bin_generator(unsigned int index);
unsigned long int binary_to_ulong(const char *b);
#endif
