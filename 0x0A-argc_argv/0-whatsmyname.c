#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - proram that proints its name and new line
 * @argc: number of arguments
 * @argv: string value of an argument
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
