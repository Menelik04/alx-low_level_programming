/**
 * main - a program that prints _putchar, followed by a new line.
 * discription - using putchar only.
 * Return - Always 0 (success).
 */
#include <unistd.h>
/** _putchar - A function.
 * write - writing data to a file descriptor.
 * 1 - standard output.
 * &c - takes the address of the c variable.
 * 1 - the number of bytes to write.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main()
{
	/* use 9 putchars to print every single words 
	 * _putchar with new line.
	 */
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
