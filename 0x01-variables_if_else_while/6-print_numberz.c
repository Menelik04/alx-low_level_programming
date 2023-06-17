#include <stdio.h>
/**
 * main - to print all single digit numbers of base 10 starting from 0.
 * discription- can only use the putchar function.
 * Return: Always 0 (success)
 */
int main (void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
