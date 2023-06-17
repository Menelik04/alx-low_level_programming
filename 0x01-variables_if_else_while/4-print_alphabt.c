#include <stdio.h>
/**
 * main - To print the alphabet in lowercase with out q and e.
 * discription- using only putchar function.
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';

	/* to iterate letters until we get z */
	while (lowercase <= 'z');
	{
		/* to escape the letter q and e */
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');/* to have a new line */
	
	return 0;
}
