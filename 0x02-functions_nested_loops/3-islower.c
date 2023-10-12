#include "main.h"

/**
 * _islower - this is the function that checks the codes
 * @c: The character to be checked
 * Return: 1 for lower case or 0 for otheerwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
