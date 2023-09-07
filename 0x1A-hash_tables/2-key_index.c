#include <stdio.h>

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return (hash);
}

/**
 * key_index - Get the index at which the key should be stored in the hash table.
 * @key: The key string.
 * @size: The size of the hash table array.
 *
 * Return: The index for storing the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value = hash_djb2(key);
    return (hash_value % size);
}

int main(void)
{
    unsigned long int size = 100; /* Size of the hash table array*/
    const unsigned char *key = (const unsigned char *)"example_key"; /* Key to find the index for*/

    unsigned long int index = key_index(key, size);

    printf("Index for key '%s' is %lu\n", key, index);

    return (0);
}
