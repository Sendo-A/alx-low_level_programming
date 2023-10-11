#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: the name
 * @f: the pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
