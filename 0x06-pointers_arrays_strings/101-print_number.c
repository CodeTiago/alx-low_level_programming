#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int t, p, count;

	if (n < 0)
	{
		_putchar(45);
		t = n * -1;
	}
	else
	{
		t = n;
	}

	p = t;
	count = 1;

	while (p > 9)
	{
		p /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((t / count) % 10) + 48);
	}
}
