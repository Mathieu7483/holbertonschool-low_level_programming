#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure for a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/
struct dog
{
char *owner;
char *name;
float age;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H*/
