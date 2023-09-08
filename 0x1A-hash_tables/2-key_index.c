#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in the hash table's array.
 * @key: The key to be hashed.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key sh.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;

if (key == NULL || size == 0)
return (0);

/* Compute the hash value using the djb2 hash function */
hash_value = hash_djb2(key);

/* Calculate the index within the array using the modulo operator */
return (hash_value % size);
}
