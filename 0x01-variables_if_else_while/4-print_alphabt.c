#include <stdio.h>
/**
 * main - to print lowercases except q and e.
 * discription - using only putchar function.
 * Return: Always 0 (success)
 */
int main (void)
{
	char n, q, e;
	for (n = 'a'; n <= 'z'; n++)
	{
		if(n != q && n != e)
	{
		putchar(n);
	}
		n++;
	}
	putchar('\n');

	return (0);
}
