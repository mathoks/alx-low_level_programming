#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctye.h>
#include "main.h"

/**
 * main - Program that takes in all
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among t
 */
int main(int argc, char *argv[])
{
int i, j, length, sum;
char *ptr;
if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
ptr = argv[i];
length = strlen(ptr);
if (isdigit(*(ptr + j)) == 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
