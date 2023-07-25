#include <stdio.h>
#include "excalc.h"
#include <stdlib.h>

/**
 * op_add - addition
 * Description: additionne
 * @a: a
 * @b: b
 * Return: renvoi
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - addition
 * Description: additionne
 * @a: a
 * @b: b
 * Return: renvoi
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - addition
 * Description: additionne
 * @a: a
 * @b: b
 * Return: renvoi
*/
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - addition
 * Description: additionne
 * @a: a
 * @b: b
 * Return: renvoi
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - addition
 * Description: additionne
 * @a: a
 * @b: b
 * Return: renvoi
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
