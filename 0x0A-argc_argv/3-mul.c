#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program tha tmultiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: If no arguments received print Error, new line and return 1, otherwise 0
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
