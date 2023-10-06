#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the created hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = NULL;

if (size < 1)
return (NULL);

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

memset(ht->array, 0, sizeof(shash_node_t *) * size);
ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *new_node = NULL, *current = NULL;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
return (0);
return (1);
}
current = current->next;
}
new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
{
new_node->sprev = NULL;
new_node->snext = ht->shead;
ht->shead = new_node;
}
else
{
current = ht->shead;
while (current->snext != NULL && strcmp(key, current->snext->key) > 0)
current = current->snext;
new_node->sprev = current;
new_node->snext = current->snext;
current->snext = new_node;
}
if (new_node->snext == NULL)
ht->stail = new_node;
return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in a
 * sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key
 * couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *current = NULL;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}

return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current = NULL;
int printed = 0;

if (ht == NULL)
return;

current = ht->shead;
printf("{");
while (current != NULL)
{
if (printed == 1)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
printed = 1;
current = current->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current = NULL;
int printed = 0;

if (ht == NULL)
return;

current = ht->stail;
printf("{");
while (current != NULL)
{
if (printed == 1)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
printed = 1;
current = current->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current = NULL, *temp = NULL;

if (ht == NULL)
return;

current = ht->shead;
while (current != NULL)
{
temp = current;
current = current->snext;
free(temp->key);
free(temp->value);
free(temp);
}

free(ht->array);
free(ht);
}

