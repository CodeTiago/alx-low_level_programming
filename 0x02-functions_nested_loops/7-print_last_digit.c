#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: int to execute the last digit
 * Return: value of the last digit 
 * 
 * */
int print_last_digit(int l)
{
	int b;
	
	if (l < 0)
		l = -l;
	b = l % 10;
	
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);

}
