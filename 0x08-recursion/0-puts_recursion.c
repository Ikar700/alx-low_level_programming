#include "main.h"

/**
 * _puts_recursion - Prints a string
 * followed by a new line
 *
 * @s: string to be copied
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recurion(*s +1);
	}

	else 
		_putchar('\n');
}
