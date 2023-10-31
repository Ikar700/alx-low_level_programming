#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 *
 * Return: 0 Always success
 */

void print_alphabet_x10(void)
{
	int g = 1;

	while (g <= 10)
	{
		char o = 'a';

		while (o <= 'z')
		{

			_putchar(o);
			o++;
		}
		g++;
		_putchar('\n');
	}
}
