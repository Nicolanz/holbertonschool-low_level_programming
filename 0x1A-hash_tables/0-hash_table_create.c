#include "hash_tables.h"

/**
 * hash_table_create - Function to create a new hash table
 * @size: size of the hash table
 * Return: Pointer to the hash table
 * 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ptr_to_table = NULL;
    hash_node_t **temp = NULL;
    int i;

    ptr_to_table = malloc(sizeof(hash_table_t));
    if (ptr_to_table == NULL)
    {
        return (NULL);
    }
    
    temp = malloc(sizeof(hash_node_t *) * size);
    if (temp == NULL)
    {
        return (NULL);
    }
    ptr_to_table->size = size;

    for (i = 0; i < size; i++)
    {
        temp[i] = NULL;
    }

    ptr_to_table->array = temp;

    return(ptr_to_table);
}