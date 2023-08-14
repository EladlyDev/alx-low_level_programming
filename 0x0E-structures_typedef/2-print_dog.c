#include "dog.h"

/**
  * print_dog - prints a struct dog.
  * @d: the structure
  */
void print_dog(struct dog *d)
	{
		if (d == 0x0)
			{ ; }
		else
		{
			if (!d->name)
				d->name = "(nil)";
			if (!d->owner)
				d->owner = "(nil)";
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
