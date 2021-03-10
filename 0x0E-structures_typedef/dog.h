#ifndef DOG_H
#define DOG_H

/**
* struct dog - name, age and owner of Django.
* @name: name of dog.
* @age: age of dog.
* @owner: owner of dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
