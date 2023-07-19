#include "function_pointers.h"

/**
 * print_name - print name using pointerto function
 * @name: String to add
 * @f: Pointer to function
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
