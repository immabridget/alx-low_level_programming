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

for(x = 'A'; x <= 'z'; x++)
{
	putchar(tolower(x));
}
return (0);
}
