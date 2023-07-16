#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it checks if a num is pos, negat or zero
 * main - checks either greater than 5, less than 6, or is zero
 *
 * Return: Always 0 when succeded
 */
int main(void)
{  
        int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", 
		        n, n % 10);
	}

	return (0);

}
