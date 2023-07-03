#include "main.h"
/**
 * _pow_recursion - fonction name
 * Description: print a string
 * @x: string
 * @y: power
 * Return: return lenght
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
