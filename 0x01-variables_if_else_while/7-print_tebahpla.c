#include <stdio.h>
/**
 * main - prints in reverse order
 * Descriptio: revese order
 * Return: 0 (sucess)
 */
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
