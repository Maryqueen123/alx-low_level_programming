#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 100; i++)
	{
		putchar(i);
		if (i != 100)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
