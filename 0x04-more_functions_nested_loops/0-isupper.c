#include "main.h"
/**
 * _isupper - this is the function that checks the codes
 * @c: The character to be checked
 * Return: 1 for lower case or 0 for otheerwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
