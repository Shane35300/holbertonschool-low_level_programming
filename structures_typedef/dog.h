#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description:  longer description
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
