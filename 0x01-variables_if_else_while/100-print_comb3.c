#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
*
* Return: 0
*/

int main(void)
{

int num1, num2;

num1 = 01;

while (num1 < 10)
{
	num2 = 01;
	while (num2 < 10)
	{
		putchar(num1);
		putchar(num2);
		num2++;
		putchar(',');
		putchar(' ');
	}
	num1++;
}
putchar('\n');
return (0);

}
