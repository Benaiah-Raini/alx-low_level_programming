#include "main.h"
#include <stdio.h>
/**
 *print_array - The fuction that prints n element of an array
 *@a: Array of integers
 *@n: Number of element of array
 *Return: void
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
