#include <stdlib.h>
#include "dog.h"
/**
*free_dog - free the malloc
*@d: pointer with dog informations
*/
void free_dog(dog_t *d)
{
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
}
