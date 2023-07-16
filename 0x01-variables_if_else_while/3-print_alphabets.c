#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * the loop execute alphabets in lowercase once the condition is met
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	/* this part prints in lowercase */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
        }

	/* this part will alphabet print in uppercase */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);

}
