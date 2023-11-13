#include <stdio.h>
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int i = 0;
	ptr = dest;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (ptr);
}
