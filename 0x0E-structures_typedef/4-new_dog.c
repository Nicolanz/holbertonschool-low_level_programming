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
	char *pro;
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{}
	i++;
	nombre = malloc(i * sizeof(char));
	if (nombre == NULL)
		return (NULL);
		free(nombre);
	for (i = 0; name[i] != '\0'; i++)
	{
		nombre[i] = name[i];
	}
	nombre[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{}
	i++;
	pro = malloc(i * sizeof(char));
	if (pro == NULL)
		return (NULL);
		free(pro);
	for (i = 0; owner[i] != '\0'; i++)
		pro[i] = owner[i];
	pro[i] = '\0';
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->name = nombre;
	dog->age = age;
	dog->owner = pro;
	return (dog);
}
