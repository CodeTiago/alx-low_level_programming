#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar((numb % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar (letter);
	
	}
	putchar('\n');

}
