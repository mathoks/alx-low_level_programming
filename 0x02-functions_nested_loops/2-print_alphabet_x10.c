#include "main.h"
/**
 * print_alphabet_x10 - ten lines
 * Description: print ooo
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
if (i < 10)
_putchar('\n');
}
}
