#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * followed by a new line
 * @argc: the number of arguments passed into the program
 * @argv: an array of pointers to the program
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
