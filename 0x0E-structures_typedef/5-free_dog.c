#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
