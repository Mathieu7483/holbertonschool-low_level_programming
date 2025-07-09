#include <stdlib.h>
#include "dog.h"
/**
*_strlen - calculate the length of a string
*@s: string of character
* Return: Length of a string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length])
{
length++;
}
return (length);
}
/**
*_strcpy - Write a function that copies the string pointed to by src
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
*@src: source tab
*@dest: dest tab
*Return: value of _strcpy
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
*new_dog - create a new dog
*@name: Name of a dog
*@age: Age of a dog
*@owner: Owner of a dog
*Return: newname et newowner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *newname, *newowner;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
newname = malloc(sizeof(char) * _strlen(name) + 1);
if (newname == NULL)
{
free(new_dog);
return (NULL);
}
newowner = malloc(sizeof(char) * _strlen(owner) + 1);
if (newowner == NULL)
{
free(newname);
free(new_dog);
return (NULL);
}
_strcpy(newname, name);
_strcpy(newowner, owner);

new_dog->name = newname;
new_dog->age = age;
new_dog->owner = newowner;

return (new_dog);
}
