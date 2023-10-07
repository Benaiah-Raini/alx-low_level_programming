#include <stdio.h>
/**
 * main - main function printf
 * Return: 0
 */
int main(void)
{
int bena, rain;
for (bena = 0; bena < 9; bena++)
{
for (rain = bena + 1; rain < 10; rain++)
{
putchar((bena % 10) + '0');
putchar((rain % 10) + '0');
if (bena == 8 && rain == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
