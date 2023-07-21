#include "main.h"

/**
*_isupper - checks if character is uppercase
*@c: character to be checked
*Return: 1 if it is uppercase, 0 if it is anything else
*/

int _isupper(int c)
{
	if (c >= 60 && c <= 90)
	{
		return (1);
	}
		return (0);
}
