#include "main.h"
/**
 * print_alphabet_10x - write alphabet x10 times
 * Return: void
 */
void print_alphabet_10x(void)
{
	char e;
	int i = 0;

	while (i <= 9)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');

		i++;
	}
}
