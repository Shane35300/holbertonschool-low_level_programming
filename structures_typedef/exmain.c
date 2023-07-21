#include <stdio.h>
#include "ex.h"

void nouveaujoueur(sj *ptr)
{
	ptr->nom = "Louna";
	ptr->age = 5;
	(*ptr).niveau = 4;
}
/**
 * main - main
 * Description: descr
 * Return: return
*/
int main(void)
{
	sj j1 = {"", 0, 0};

	nouveaujoueur(&j1);

	printf("Mon nom est %s\n", j1.nom);
	printf("J'ai %d ans et un niveau %d\n", j1.age, j1.niveau);

	return (0);
}
