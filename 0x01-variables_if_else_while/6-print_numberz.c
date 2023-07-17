#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 however the program use only putchar
 *
 *Return - 0 if succeed otherwise terminate
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar ('\n');
	return (0);

}
