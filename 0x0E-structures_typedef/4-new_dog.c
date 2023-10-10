#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: char to check
 * Return: 0 is success
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
*/

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];
	dest[count] = '\0';
	return (dest);
}

/**
 * new_dog -  a function that creates a new dog
 * with dynamically allocated name and owner.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner name.
 * Return: Pointer to the new dog struct (Success), otherwise return NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	/* length of the dog name and owner strings */
	len_name = _strlen(name);
	len_owner = _strlen(owner);

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name */
	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)  /*check for allocation success */
	{
		free(new_dog);
		return (NULL);
	}

	/* Allocate memory for the owner */
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)  /*check for allocation success */
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner strings to the new dog struct */
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	/* Set the age of the new dog */
	new_dog->age = age;

	return (new_dog);
}
