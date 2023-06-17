#include <stdio.h>
/**
 * main - To print the alphabet in lowercase and then upercase.
 * discription- using only putchar function.
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';
	char upercase = 'A';
	
	/* to print a lowercase */
	while (lowercase <= 'z')

	{
		putchar(lowercase);
		lowecase++;
	}
	/* to print upercase */
	while (upercase <= 'Z')

	{
		putchar(upercase);
		upercase++;
	}
	putchar('\n');/* to print a new line */

	return (0);
}
