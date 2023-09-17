#include "main.h"
/**
 * _islower - Function that check lowercase character
 * @c: check lowercase
 * Return: 1 success 0 error
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
