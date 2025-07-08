#include "dog.h"
#include <stdio.h>
/**
*init_dog - Initialize a function of a structure
*@d: pointer of a structure
*@name: name of a dog
*@age: age of a dog
*@owner: owner of a dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
