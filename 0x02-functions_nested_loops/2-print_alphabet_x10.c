#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 */

void print_alphabet_x10(void)
{
	char i;
	int b;

	for (b = 1;  b <= 10; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
