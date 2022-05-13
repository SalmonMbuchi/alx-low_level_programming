#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines different data types
 * @name: pointer to a char that stores the address of the string literal
 * @owner: pointer to a char that stores the address of the string literal
 * @age: float
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
