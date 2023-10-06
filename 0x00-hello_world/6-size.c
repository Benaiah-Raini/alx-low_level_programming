#include <stdio.h>
/**
 *main-This describes the main fuction code
 *Return:0 
 */
int main(void)
{
char z;
int w;
long int y;
long long int c;
float x;

printf("Size of a char:%lubyte(s)\n", (unsigned long)sizeof(z));
printf("Size of an int:%lubyte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int:%lubyte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int:%lubyte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float:%lubyte(s)\n", (unsigned long)sizeof(x));
return (0);
}
