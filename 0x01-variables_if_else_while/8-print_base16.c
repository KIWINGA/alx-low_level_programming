#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int d;
	char low;

	for (d = 'a'; low <= 'f'; low++)
	{
		putchar(d);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
