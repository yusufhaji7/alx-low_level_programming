#include <stdio.h>

/**
 * main - a program that prints all arguements it receives
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
