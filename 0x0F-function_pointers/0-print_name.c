#include "function_pointers.h"
/**
 * print_name - dfff
 * @name: fgghh
 * @f: pointer to functoion
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name);
}
