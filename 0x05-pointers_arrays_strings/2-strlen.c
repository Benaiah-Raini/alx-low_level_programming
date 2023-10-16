#include "main.h"
/**
 *_strlen - This the function that returns the length of a string.
 *@s:The string to get the length
 *Return: The lenght of the @s
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
