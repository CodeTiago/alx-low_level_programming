#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints combination of all one digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + '0');
		if (numb != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
