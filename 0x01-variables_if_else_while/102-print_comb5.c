#include <stdio.h>
/**
 * main - to print all possible combinations of two two-digit numbers.
 * discription- only use the putchar function.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; j =< 100; j++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 90)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
