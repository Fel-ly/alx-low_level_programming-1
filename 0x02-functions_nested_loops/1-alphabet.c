#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return : if successful 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}

	_putchar('\n');
}
