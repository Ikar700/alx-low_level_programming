#include <stdio.h>

/**
 * main - prints all arguiments it receives
 * followed by a new line
 * @argc: the number of arguments supplied
 * @argv: an array containing alll arguments
 *
 * Return: Always 0
 */
int main(int __attribute((unused)) argc, char **argv)
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
