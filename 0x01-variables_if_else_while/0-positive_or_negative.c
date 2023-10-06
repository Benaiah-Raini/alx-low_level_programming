#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function printf
 * Return: 0
 */
/* main function printf */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
if (n > 0)
{ /* n is positive */
printf("%d is positive\n");
}
else if (n == 0)
{/* n is zero */
printf("%d is zero\n");
}
else
{ /* n is negative */
printf("%d is negative\n");
}
return (0);/* return:0 */
}
