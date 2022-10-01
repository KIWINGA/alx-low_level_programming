#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints a number followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
