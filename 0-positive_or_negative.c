#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if ( n > 0) { /* n is positive */
	    printf("is positive"\n);
	} else if ( n == 0) {c/* n is zero */
	    printf("is zero");
	} else { /* n is negative */
            printf("is negative");
	}
	return (0);
}
