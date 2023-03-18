#include <stdio.h>

/**
 * main -  Entry point
 * Description: 'Prints all single numbers to base 10'
 * Return: Always zero
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
