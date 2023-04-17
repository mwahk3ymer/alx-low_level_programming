#ifndef DOG_H

#define DOG_H


#include <stdlib.h>

/**
 * struct dog -rep dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of onwer
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
