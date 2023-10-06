#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main function printf */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
if (n > 0)
{ /* n is positive */
printf("is positive\n");
}
else if (n == 0)
{/* n is zero */
printf("is zero\n");
}
else
{ /* n is negative */
printf("is negative\n");
}
return (0);/* return:0 */
}
