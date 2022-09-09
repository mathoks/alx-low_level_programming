#include <stdio.h>
/**
 * main - muliple alpha
 * Description: alphabetx
 * Return: 0 (succed)
 */
int main(void)
{
char c, C;
c = '0';
C = 'a';
while (c <= '9')
{
putchar(c);
c++;
}
while (C <= 'f')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
