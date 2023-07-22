#include "main.h"

/**
*print_numbers - print the number from 0 up to 9
*Return: number from 0 up to 9
*/

void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
