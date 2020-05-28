#include "dog.h"
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
	char *nombre;
	char *own;

	nombre = malloc(strlen(name));
	if (nombre == NULL)
	{
		free(nombre);
		return (NULL);
	}
	own = malloc(strlen(owner));
	if (own == NULL)
	{
		free(own);
		return (NULL);
	}
	strcpy(nombre, name);
	strcpy(own, owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name= nombre;
	dog->age = age;
	dog->owner = own;
	return (dog);
}
