#include <stdio.h>
/**
 * main - Displays sizes
 * Description: Print sizes
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu bytes(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}
