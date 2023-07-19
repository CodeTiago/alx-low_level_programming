#include "main.h"
/**
 * print_alphabet - This is an entry point
 *
 * Return: 0 if succeed otherwise terminate
 */
void print_alphabet(void)
{
	char tiago = 'a';

	while (tiago <= 'z')
	{
		_putchar(tiago);
		tiago++;
	}
	_putchar('\n');

}
