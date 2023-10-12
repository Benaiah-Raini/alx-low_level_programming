#include "main.h"

/**
 * print_alphabet_x10 - this is the function that checks the codes
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char b;
int a = 0;
/* for loop*/
while (a < 10)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
a++;
}
}
