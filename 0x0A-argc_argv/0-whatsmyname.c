#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: the number of arguments to be passed
 * @argv: an array of ppointers to the arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
