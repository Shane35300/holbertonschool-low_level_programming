#include "main.h"

/**
 * jack_bauer - minutes
 * Description: print minutes
 * Return: return void
 */
void jack_bauer(void)
{
	int H = 0;

	while (H <= 2)
	{
		int h = 0;

		while ((h <= 9 && H < 2) || (H == 2 && h <= 3))
		{
			int M = 0;

			while (M < 6)
			{
				int m = 0;

				while (m < 10)
				{
					_putchar(H + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(M + '0');
					_putchar(m + '0');
					_putchar('\n');
					m++;
				}
				M++;
			}
			h++;
		}
		H++;
	}
}
