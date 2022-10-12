#include "function_pointers.h"
/**
 * int_index - asdd
 * @array: dtt
 * @size: sdftf
 * @cmp: dggg
 * Return: hhg
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int r;
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		r = array[i];
		y = (cmp(r));
		if (y != 0)
			return (i);
	}
	return (-1);
}
