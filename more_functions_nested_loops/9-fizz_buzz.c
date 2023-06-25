#include <stdio.h>

/**
 * main - print square
 * Description: The “Fizz-Buzz test
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		char fizz[] = "Fizz";
		char buzz[] = "Buzz";
		char fizzbuzz[] = "FizzBuzz";

		if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("%s ", fizz);
		}
		else if ((n % 5) == 0 && (n % 3) != 0)
		{
			printf("%s ", buzz);
		}
		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("%s ", fizzbuzz);
		}
		else if ((n % 3) != 0 && (n % 5) != 0)
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
