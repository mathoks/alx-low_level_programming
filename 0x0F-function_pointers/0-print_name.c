#include "function_pointers.h"
/**
 * print_name - dfff
 * @name: fgghh
 * @f: pointer to functoion
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
