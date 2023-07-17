#include <stdio.h>

/**
 * main - prints numbers from 0 to 9.
 *
 *Return - 0 if succeded
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
