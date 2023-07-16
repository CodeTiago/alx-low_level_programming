#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * the loop execute alphabets in lowercase once the condition is met
 * Return 0:for success/ if the conndition is either met or not
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);

}
