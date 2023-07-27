#include "main.h"
/**
 * rot13 - change letters to ROT13.
 * @s: input string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	int count = 0, c;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (c = 0; c < 52; c++)
		{
			if (*(s + count) == alphabet[c])
			{
				*(s + count) = rot13[c];
				break;
			}
		}
		count++;
	}

	return (s);
}
