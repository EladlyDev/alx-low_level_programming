#include "dog.h"

/**
  * init_dog - initialize a variable of type struct dog.
  * @d: the address of the structure
  * @name: the new name
  * @age: the new age
  * @owner: the new owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == 0x0)
			{ ; }
		else
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
	}
