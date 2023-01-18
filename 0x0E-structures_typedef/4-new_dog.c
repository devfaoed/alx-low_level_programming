#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gives length og string
 * @s: Param
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		x++;
		i++;
	}

	return (x);
}

/**
 * _strcpy - I'm trying hard to understand
 * @dest: Copy destination
 * @src: source of string to be copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcpy(doggy->owner, owner);

	return (doggy);
}
