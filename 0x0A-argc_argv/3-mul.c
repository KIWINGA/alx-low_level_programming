#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program tha tmultiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: If no arguments received print Error, new line and return 1, otherwise 0
*/
int main(int argc, char* argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		resutl = x * y;
		printf("%d\n", result);
		return (0);
	}
}
