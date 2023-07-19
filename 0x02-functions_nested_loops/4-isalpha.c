#include "main.h"
/**
 * _isalpha - checks alphabetic character parameter and returns
 * its checked value
 *
 * @c: the character to be checked
 * return: 1 if c is a letter, otherwise terminate
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
