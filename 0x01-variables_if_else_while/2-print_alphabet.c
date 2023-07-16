#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * the loop execute alphabets in lowercase once the condition is met
 * retun 0: if the conndition is either met whether not
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
