#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to struct of new dog or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[i] != '\0'; j++)
	{
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (0);
	}
	ndog->name = malloc(sizeof(char) * (i + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (0);
	}
	ndog->owner = malloc(sizeof(char) * (j + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (0);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
/**
 * _strcpy - copies string to buffer
 * @dest: to be copied to
 * @src: to be copied
 * Return: Always pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; *(src + i) != '\0'; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
