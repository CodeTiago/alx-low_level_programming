#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints combination of all digit numbers.
 *
 * Return: Always 0 if Succeed
 */
int main(void)
{
	int numb = 0;
	int tens, ones;

	while (numb <=99)
	{
		tens = numb % 10;
		ones = numb / 10;
		if (ones < tens)
		{
			putchar(ones + '0');
			putchar(tens + '0');
			if (numb <89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		numb++;
	}
	putchar('\n');
	return (0);
}
