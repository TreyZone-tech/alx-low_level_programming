#include "main.h"

/**
 * main - Entry point
 * Description: 'Prints alphabet lowercase'
 * Return: Always zero
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
