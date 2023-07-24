#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib[50];
	long int i, j, k, next;
	
	j = 1;
	k = 2;
	
	for (i = 0; i < 50; ++i)
	{
		fib[i] = j;

		
		if (i != 49)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
