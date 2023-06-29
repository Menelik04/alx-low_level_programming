#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: The string to be capitalized
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (srt[index - 1] == ' ' ||
				srt[index - 1] == '\t' ||
				srt[index - 1] == '\n' ||
				srt[index - 1] == ',' ||
				srt[index - 1] == ';' ||
				srt[index - 1] == '.' ||
				srt[index - 1] == '!' ||
				srt[index - 1] == '?' ||
				srt[index - 1] == '"' ||
				srt[index - 1] == '(' ||
				srt[index - 1] == ')' ||
				srt[index - 1] == '{' ||
				srt[index - 1] == '}' ||
				index == 0)
			str[index] -= 32;

		index++;
	}
	return (str);
}
