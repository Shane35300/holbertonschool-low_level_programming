#include "main.h"

/**
 * _isdigit - isdigit function
 * Description: check digits
 * Return: return to 1 or 0
 *@c: variable c
 */
int _isdigit(int c)
{

	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
