#include "function_pointers.h"
/**
 * print_name - see description
 * Description: prints name
 * @name: input parameter for print_name
 * @f: input function parameter for print_name
 * Return: nothinng
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
