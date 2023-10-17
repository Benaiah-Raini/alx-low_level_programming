#include "main.h"
/**
 * _strcpy - The function that copy the string
 * @dest: Destination value
 * @src: Source value
 * Return: The pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\n'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\n';
return (dest);
}
