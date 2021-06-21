#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet
 * x: temp variable
 * Description: lower alphabets
 * Return: Always 0 Success
 */
int main(void)
{
int x;

for (x = 'A'; x <= 'z'; x++)
{
	x = tolower(x);
	putchar(x);
}
putchar('\n');
return (0);
}
