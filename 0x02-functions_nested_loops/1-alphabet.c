#include "main.h"

/**
 * print_alphabet - prints the alphabet, followed by a new line
 *
 * Return: 0 Always success
 */
void print_alphabet(void)
{
	char O = ('a');

	while  (O <= 'z')
	{
		_putchar(O);
		O++;
	}

	_putchar('\n');
}
