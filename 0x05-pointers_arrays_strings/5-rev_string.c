#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	iant length = string_length(s);
	int i, j;
	
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		swap_chars(&s[i], &s[j]);
	}
}
