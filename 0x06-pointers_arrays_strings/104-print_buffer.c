#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int t, p, n;

	if (size <= 0)
		printf("\n");
	else
	{
		for (t = 0; t < size; t += 10)
		{
			printf("%.8x:", t);
			for (p = t; p < t + 10; p++)
			{
				if (p % 2 == 0)
					printf(" ");
				if (p < size)
					printf("%.2x", *(b + p));
				else
					printf("  ");
			}
			printf(" ");
			for (n = t; n < t + 10; n++)
			{
				if (n >= size)
					break;
				if (*(b + n) < 32 || *(b + n) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + n));
			}
			printf("\n");
		}
	}
}
