#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The parameter to be checked
 * Return: int
 */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	return (0);
}
