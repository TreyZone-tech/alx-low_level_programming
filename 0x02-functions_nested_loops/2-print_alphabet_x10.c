#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 *
 * Return: Always zero
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char m;

	while (i <= 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
		i++;
	}
}
