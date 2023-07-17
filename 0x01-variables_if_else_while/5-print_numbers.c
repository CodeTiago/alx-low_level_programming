#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 if succeed
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
