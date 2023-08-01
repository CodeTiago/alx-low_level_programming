#include <main.h>

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer or array
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int t;
	int p;

	for (t = 0; t < 8; t++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[t][p]);
		_putchar('\n');
	}
}
