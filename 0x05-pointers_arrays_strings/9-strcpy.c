#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * pointed to by src
 * @dest: copy to
 * @src: copy from
 * Retrn: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (y = 0 ; y < 1; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
