#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints lowercase alphabets in reverse'
 * Return: Always zero
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
