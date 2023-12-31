#include "main.h"
/**
 * _isupper -prog checks for uppercase character
 * @c: Variable text
 * Return: 1 for upper letter of 0 for any else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
