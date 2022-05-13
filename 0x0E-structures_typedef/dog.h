#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines different data types
 * @name: pointer to a char that stores the address of the string literal
 * @owner: pointer to a char that stores the address of the string literal
 * @age: float
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
