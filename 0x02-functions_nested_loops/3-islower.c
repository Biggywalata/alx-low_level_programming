#include "main.h"
/**
 * _islower - it will check for a char with lowercase
 * @c: the char to be checked
 * Return: 1 if char is lowercase
 * Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
