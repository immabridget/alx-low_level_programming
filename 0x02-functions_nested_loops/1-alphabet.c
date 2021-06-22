#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase alphabet
 * x: temp variable
 * Description: lower alphabets
 * Return: Always 0 Success
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int x;

for (x = 'A'; x <= 'z'; x++)
{
	x = tolower(x);
	putchar(x);
}
putchar('\n');
}

