#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numners
 * @argc: argument count
 * @argv: argument value
 * Return: if number contains symbol, print Error followed by return 1 otherwise return 0
 */
int main(int argc, char *argv[])
{
	int num;
	int result = 0;
	int i;

	while (argc-- > 1)
	{
		for (i = 0, argv[argc][i]; i++)
		{
			if (!isdigit(argv[argc][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num:
	}
	printf("%d\n", result);
	return (0);
}
