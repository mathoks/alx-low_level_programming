#include "main.h"
#include "stdio.h"
/**
 * print_array - hhfgdfdf
 * @a: array
 * @n: gsgf
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int *array = a;
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
	}
}
