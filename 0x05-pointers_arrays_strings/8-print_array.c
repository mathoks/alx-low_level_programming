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
		printf("%d, ", array[i]);
		else if (n <= 0)
			printf("\n");
		else
			printf("%d", array[i]);
	}
	printf("\n");
}
