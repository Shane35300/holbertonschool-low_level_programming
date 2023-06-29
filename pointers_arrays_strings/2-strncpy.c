#include "main.h"
/**
* _strncpy - strncpy
*@dest: dest
*@src: src
*@n: n
* Return: return
*/
char *_strncpy(char *dest, char *src, int n)
{
	int number = 0;

	while (number < n && src[number] != '\0')
	{
		dest[number] = src[number];
		number++;
	}
	while (number < n)
	{
		dest[number] = '\0';
		number++;
	}
	return (dest);
}
