/**
 * swap_int - swap 2 integers
 * Description : swaps the values of two integers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int tempa = *a;
	int tempb = *b;

	*a = tempb;
	*b = tempa;
}
