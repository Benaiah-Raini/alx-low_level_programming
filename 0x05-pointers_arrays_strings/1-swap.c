#include "main.h"
/**
 * swap_int - This the function that swaps the values of two integers.
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * Return - nothing:
 */
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
