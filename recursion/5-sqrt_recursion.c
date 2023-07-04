/**
 * square - fonction supplémentaire
 * @i: variable i
 * @n: nombre de base pour calculs
 * Return: return
 */
int square(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1); /* Square root does not exist */
	}
	return (square(i + 1, n));
}

/**
 * _sqrt_recursion - calcul de la racine carré
 * @n: nombre de base pour calcul
 * Return: return
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (square(1, n));
}
