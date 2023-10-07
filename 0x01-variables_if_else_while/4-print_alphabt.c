#include <stdio.h>
/**
 * main - main function printf
 * Return: 0
 */
int main(void)
{
char bena;
for (bena = 'a'; bena <= 'z'; bena++)
{
if (bena != 'e' && bena != 'q')
putchar(bena);
}
putchar('\n');
return (0);
}
