#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
void putchar(void)
{
	 write(1, "_putchar", 8);
}
int main(void)
{
	putchar();
	return (0);
}
