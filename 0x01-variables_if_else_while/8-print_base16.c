#include <stdio.h>
/**
 * main - main function printf
 * Return: 0
 */
int main(void)
{
int num;
char bena;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
for (bena = 'a'; bena <= 'f'; bena++)
putchar(bena);
}
putchar('\n');
return (0);
}
