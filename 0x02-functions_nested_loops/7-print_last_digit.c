#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be noticed
 * Return:  the value of the last digit
 */
int print_last_digit(int n)
{
	while (n >= 10)
		n /= 10;
	return (n % 10);
}
