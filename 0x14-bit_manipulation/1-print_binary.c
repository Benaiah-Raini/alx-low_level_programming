#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
int i, counter = 0;
unsigned long int h;

for (i = 63; i >= 0; i--)
{
h = n >> i;
if (h & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
