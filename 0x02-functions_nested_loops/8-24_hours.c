#include "main.h"

/**
 * jack_bauer - prints each minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: no return
 *
 */
void jack_bauer(void)
{
	int i, j;

	while (i < 24)
	{
		j = 0;
		
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}

}
