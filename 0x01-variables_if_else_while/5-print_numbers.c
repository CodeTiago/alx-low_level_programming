#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints numbers.
 *
 * Return - 0 if succeded
 */
int main(void)
{
	char  n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
