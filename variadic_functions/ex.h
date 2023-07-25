#ifndef EX_H
#define EX_H
#include <stdarg.h>

typedef struct choice
{
	char lettre;
	void (*f)(va_list liste);
} ch;

void print_all(const char * const format, ...);
void caractere(char char1);
void integer(int int1);
void decimal(float flt1);
void string(char *str);


#endif /* EX_H */
