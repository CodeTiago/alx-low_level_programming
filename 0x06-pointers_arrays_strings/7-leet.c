#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	char l[] = "aeotlAEOTL";
	char num[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == l[j])
			{
				*(s + i) = num[j];
			}
		}
		i++;
	}
	return (s);
}
