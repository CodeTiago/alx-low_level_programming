#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, next;
	long int sum = 0;
	j = 1;
	k = 2;
       
	while (j <= 4000000)
	{
		if (j % 2 == 0)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", sum);

	return (0);
}
