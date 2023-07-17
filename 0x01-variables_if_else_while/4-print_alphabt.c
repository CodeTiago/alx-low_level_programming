#include <stdio.h>

/**
 * main - prints the alphabet in lowercase without including e and q
 *
 * the loop execute alphabets in lowercase once the condition is met
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar (letter);
	}
	putchar ('\n');
	return (0);

}
