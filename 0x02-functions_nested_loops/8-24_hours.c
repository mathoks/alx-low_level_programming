#include "main.h"
/**
 * jack_bauer - gdhfgyy
 * Description: dhdhufugu
 * Return: 0
 */
void jack_bauer(void)
{
int  j, k;
for (j = 0; j < 24; j++)
{
for (k = 0; k < 60; k++)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar(':');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar('\n');
}
}
if (j > 24)
_putchar('\n');
}
