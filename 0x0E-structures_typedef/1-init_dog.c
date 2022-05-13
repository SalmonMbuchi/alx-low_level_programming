#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable to be initialized
 * @name: pointer to a char
 * @owner: pointer to a char
 * @age: float
 * Return: void
 */
void init_dog(struct dog *d,char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}


