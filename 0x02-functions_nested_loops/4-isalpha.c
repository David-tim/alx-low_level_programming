#include "main.h"

/**
*_isalpha- checks for alphabetic characters
*@c: character to be checked out for
*Return: 1 if c is a letter, lowercase or uppercase otherwise return 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
