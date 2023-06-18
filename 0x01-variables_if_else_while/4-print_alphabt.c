#include <stdio.h>
/**
 * main - To print the alphabet in lowercase with out q and e.
 * discription- using only putchar function.
 * Return: Always 0 (success)
 */
int main(void)
{
	char n = 'a';

	/* to iterate letters until we get z */
	for (n = 'a'; n <= 'z'; n++);
	{
		if (n == 'e' && n == 'q')
		{
			continue;
		}
		putchar('0' + n);
		putchar(' ');
	}
	putchar('\n');/* to have a new line */
	
	return 0;
}
