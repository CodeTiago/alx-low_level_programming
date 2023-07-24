#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
    int count = 98;
    int first = 1;
    int second = 2;
    int i;
   
    printf("%d, %d, ", first, second);

    for (i = 3; i <= count; i++)
    {
	    int next = first + second;
	    printf("%d", next);
	    
	    if (i < count)
	    {
		    printf(", ");
        }
	    first = second;
	    second = next;
    }
    printf("\n");
    
    return 0;
}
