#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;
	char ch;

	while (count >= 0)
	{
		ch = s[count];
		if (ch == '\0')
			break;
	while (*(s + count) != '\0')
		count++;
	}
	
	return (count);
}
