#ifndef BIT_H
#define BIT_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

unsigned int binary_to_uint(const char *b);
#endif
