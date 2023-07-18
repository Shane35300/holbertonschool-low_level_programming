#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * Description: print a name in uppecase and lowercase
 * @name: name
 * @f: ptr to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;

	(*f)(name);
}
