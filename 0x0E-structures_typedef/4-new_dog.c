#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @l: input string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copies a string from source to destination
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int  i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1 = _strlen(name);
	int l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
    {
        return (NULL);
    }

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
