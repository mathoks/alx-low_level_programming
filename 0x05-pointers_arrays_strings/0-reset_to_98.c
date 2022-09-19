#include "main.h"
/**
 * reset_to_98 - reset value of pointer 
 * @n: argument
 * Return: void 
 */
void reset_to_98(int *n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	*n = 98;
}
