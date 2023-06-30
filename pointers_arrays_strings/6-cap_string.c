#include "main.h"
#include <ctype.h>
/**
* cap_string - capitalize
* Description : capitalizes all words of a string
* @str: a pointer/
* Return: return
*/
char *cap_string(char *str)
{
	int nb = 0;

	while (str[nb] != '\0')
	{
		if (str[nb] == ',' ||
		str[nb] == '\t' ||
		str[nb] == ' ' ||
		str[nb] == '\n' ||
		str[nb] == ';' ||
		str[nb] == '.' ||
		str[nb] == '!' ||
		str[nb] == '?' ||
		str[nb] == '"' ||
		str[nb] == '(' ||
		str[nb] == ')' ||
		str[nb] == '{' ||
		str[nb] == '}')
		{
			str[nb + 1] = toupper(str[nb + 1]);
		}
		nb++;
	}
	return (str);
}
