#ifndef DOG_H_
#define DOG_H_

/* Standard Libraries */
#include <stdio.h>

/**
  * struct dog - the information of a dog.
  * @name: the dog's name
  * @age: the dog's age
  * @owner: its owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H_ */
