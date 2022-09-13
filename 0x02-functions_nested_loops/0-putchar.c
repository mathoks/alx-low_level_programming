#include "main.h"
/**
 * main - hey putchar
 * Description: prints
 * Return: '0'
 */
int main(void)
{
char key[9] = "_putchar";
int count, i;
count = 0;
while (key[count] != '\0')
{
count++;
}
for (i = 0; i < count; i++)
{
_putchar(key[i]);
}
_putchar('\n');
return (0);
}
