#include "function_pointers.h"
<<<<<<< HEAD

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print
=======
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function
>>>>>>> 6df460f77932ac099f579ca22b5f999d883012a1
 *
 */

void print_name(char *name, void (*f)(char *))
{
<<<<<<< HEAD
=======
	if (name == NULL || f == NULL)
		return;
>>>>>>> 6df460f77932ac099f579ca22b5f999d883012a1
	f(name);
}
