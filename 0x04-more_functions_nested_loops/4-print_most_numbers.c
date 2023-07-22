#include "main.h"

/**
*print_most_numbers - print out numbers
*description: do not print number 2 and 4
*Return: the numbers 0 to 9
*/

void print_most_numbers(void)

{

	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	putchar(x);
	}
	}
	putchar('\n');
}
