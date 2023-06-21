#include "main.h"

/**
 * _isalpha - isalpha function
 * Description: check for alpha caracters
 * Return: return to 1 or 0
 *@c: variable c
 */
int _isalpha(int c)
{

	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
