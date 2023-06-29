#include "main.h"
/**
* _strcmp - strcmp
*@s1: ptr1
*@s2: ptr2
* Return: return
*/
int _strcmp(char *s1, char *s2)
{
	int nb = 0;

	while (s1[nb] == s2[nb])
	{
		if (s1[nb] == '\0')
		{
			return (0);
		}
		nb++;
	}
	return (s1[nb] - s2[nb]);
}
