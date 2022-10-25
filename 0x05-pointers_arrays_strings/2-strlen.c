#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: string whose lwnght is to be returned
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
