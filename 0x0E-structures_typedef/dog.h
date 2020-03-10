#ifndef _SAMPLE_HEADER_H
#define _SAMPLE_HEADER_H

int _putchar(char c);
/**
 * struct dog - Struct about dogs
 * @name: Name of the dog.
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _SAMPLE_HEADER_H_ */
