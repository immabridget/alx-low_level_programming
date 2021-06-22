#include <stdio.h>
/**
 * main - using putchar
 * Mystr: an array string
 * Description: print a string using putchar
 * Return: Always 0 Success
 */
int main(void)
{
char Mystr[] = "Holberton";
int i;	

for (i = 0; i <= 10; i++)
{
	putchar(Mystr[i]);
}
putchar('\n');
return (0);
}
