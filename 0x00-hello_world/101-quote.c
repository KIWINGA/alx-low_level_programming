#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char err [] = "and that pierce of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, err ,59);
	return (1);
}
