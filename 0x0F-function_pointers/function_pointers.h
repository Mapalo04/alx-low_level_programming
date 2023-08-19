#ifndef _function_pointers_h_
#define _function_pointers_h_
<<<<<<< HEAD
=======
#include <stddef.h>
#include <stdlib.h>
>>>>>>> 6df460f77932ac099f579ca22b5f999d883012a1

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


<<<<<<< HEAD

=======
>>>>>>> 6df460f77932ac099f579ca22b5f999d883012a1
#endif
