#include <stdio.h>
/**
 * main -Entry point
 * Description: 'Prints all alphabets loercase excluding q and e'
 * Return: Always zero
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	n++;

	return (0);
}
