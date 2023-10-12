#include "main.h"
#include <stdio.h>
/**
 *_abs - this is the function that checks the codes
 *@c: The character to be checked
 *Return: absolute number
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
