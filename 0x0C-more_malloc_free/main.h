#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

/*functions for 101-mul.c */

/**
 * error_exit - prints error with _putchar
 * and exits with 98
 * Return: Error 98 and exit(98)
*/
