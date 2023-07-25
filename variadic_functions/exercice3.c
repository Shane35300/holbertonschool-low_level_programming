#include <stdarg.h>
#include <stdio.h>
#include "ex.h"

void caractere(va_list liste)
{
	char caract = va_arg(liste, char);
	printf("%c", caract);
}
void integer(va_list liste)
{
	int entier = va_arg(liste, int);
	printf("%d", entier);
}
void decimal(va_list liste)
{
	float flt = va_arg(liste, float);
	printf("%f", flt);
}
void string(va_list liste)
{
	char *str = va_arg(liste, char *);
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *ptr;
	ptr = &format;
	va_list liste;

	va_start(liste, format);
	ch tableau[] {
		{'c', caractere},
		{'i', integer},
		{'f', decimal},
		{'s', string}
	};
	while (ptr[i])
	{
		j = 0;

		while (tableau[j])
		{
			if (strcmp(tableau[j].lettre, ptr[i]) == 0)
			{
				tableau[j].f(va_arg(liste));
				printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(liste);
	printf("\n");
}
