#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition
 * Description: add
 * @a: a
 * @b: b
 * Return: return
*/
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	if ((a - b) < 0)
	return (-(a - b));

	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
