#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
void array_ iterator(int *array, size_t size, void (*action)(int));

aoid print_name(char *name, void (*f)(char *));
#endif
