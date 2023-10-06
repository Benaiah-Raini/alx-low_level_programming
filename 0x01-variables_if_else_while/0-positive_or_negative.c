#include <stdlib.h>
#include <time.h>
/* main-this the main fuction main with printf function */

/* main-this is the function main that return:0 and fuction printf */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
if (n > 0)
{ /* n is positive */
printf("is positive"\n);
}
else if (n == 0)
{/* n is zero */
printf("is zero");
}
else
{ /* n is negative */
printf("is negative");
}
return (0);/* return:0 */
}
