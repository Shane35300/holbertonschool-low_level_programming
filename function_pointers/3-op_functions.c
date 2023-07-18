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
/**
 * op_sub - sub
 * Description: sub
 * @a: a
 * @b: b
 * Return: return
*/
int op_sub(int a, int b)
{
	if ((a - b) < 0)
	return (-(a - b));

	return (a - b);
}
/**
 * op_mul - multiplication
 * Description: mul
 * @a: a
 * @b: b
 * Return: return
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * Description: div
 * @a: a
 * @b: b
 * Return: return
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo
 * Description: mod
 * @a: a
 * @b: b
 * Return: return
*/
int op_mod(int a, int b)
{
	return (a % b);
}
