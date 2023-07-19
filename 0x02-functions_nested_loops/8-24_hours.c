#include "main.h"

/**
 * jack_bauer - prints each minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: no return
 *
 */void jack_bauer(void)
{
	int k, h;
	while (k < 24)
	{
		h = 0;
		while (h < 60)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			h++;
		}
		k++;
	}

}
