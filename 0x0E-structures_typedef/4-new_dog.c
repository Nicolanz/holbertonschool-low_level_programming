#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dname = name;
	char *downer = owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = dname;
	dog->age = age;
	dog->owner = downer;
	return (dog);
}
