#include <dog.h>

void init_dog (struct dog *d, char *name, char *owner, float age)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
