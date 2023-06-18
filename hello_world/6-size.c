#include <stdio.h>

/**
 * main - Main function
 * Return: 0 succed
 */

int main(void)
{
char charType;
int intType;
long longType;
long long longlongType;
float floatType;  
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d bytes(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return (0);
}
