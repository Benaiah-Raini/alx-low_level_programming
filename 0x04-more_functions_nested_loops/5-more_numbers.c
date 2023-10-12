#include "main.h"

/**
 * more_numbers - print 10 more numbers
 */

void more_numbers(void)
{
int a, v;
for (a = 1; a <= 10; a++)
{
for (v = 0; v <= 14; v++)
{
if (v >= 10)
_putchar('1');
_putchar (v % 10 + '0');
}
_putchar('\n');
}
}
