#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments as it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
