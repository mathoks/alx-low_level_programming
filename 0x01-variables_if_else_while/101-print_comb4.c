#include <stdio.h> 
/**
 * main - mixing magic
 * Description: doing this
 * Return: 0
 */
int main(void)
{
int a, b, c, d, i;
i = 0;
while(i <= 990)
{
a = i / 100;
b = i / 10;
c = i % 10;
d = b % 10;
if ((a >= d ) || (a >= c) || (d >= c))
{
i++;
continue;
}
putchar(a + '0');
putchar(d + '0');
putchar(c + '0');
if (i != 789)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
