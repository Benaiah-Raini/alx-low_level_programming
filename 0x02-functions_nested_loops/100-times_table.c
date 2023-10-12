#include "main.h"
/**
 *print_times_table - This is the function that prints the multle table
 *@n: This the digit to be used in the multiplication
 *Return:0
 *
 *
 *
 */
void print_times_table(int n)
{
int num, mult, prod;
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('.');
_putchar(' ');
prod = num * mult;
if (prod <= 98)
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
