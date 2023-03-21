#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog with a copy of name and owner
 * @name: pointer to name string
 * @age: age of the dog
 * @owner: pointer to owner name string
 *
 * Return: pointer to new dog_t struct, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
int name_len = 0, owner_len = 0;

while (name[name_len] != '\0')
name_len++;
while (owner[owner_len] != '\0')
owner_len++;

new_name = malloc(sizeof(char) * (name_len + 1));
if (new_name == NULL)
return (NULL);
for (int i = 0; i <= name_len; i++)
new_name[i] = name[i];

new_owner = malloc(sizeof(char) * (owner_len + 1));
if (new_owner == NULL)
{
free(new_name);
return (NULL);
}
for (int i = 0; i <= owner_len; i++)
new_owner[i] = owner[i];

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
free(new_name);
free(new_owner);
return (NULL);
}

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return (new_dog);
}
