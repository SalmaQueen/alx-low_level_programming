#include <stdlib.h>
#include "dog.h"

/**
* _strdup - return pointer to new allocate space in memory
* that contains a copy pf the string given as parameter
* @str: value to check
*
* Return: char
*/

char *_strdup(char *str)
{
	char *dupl;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i += 1;
	i += 1;
	dupl = malloc(i * sizeof(*dupl));
	if (dupl == NULL)
		return (NULL);
	while (j < i)
	{
		dupl[j] = str[j];
		j += 1;
	}
	return (dupl);
}

/**
* new_dog - create new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: new struct dog
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	return (new_dog);
}
