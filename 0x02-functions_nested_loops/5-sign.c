#include "main.h"

/**
 * print_sign - this is the function that checks the codes
 * @n: The character to be checked
 * Return: 1 for positive or 0 for otheerwise and -1 for negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
