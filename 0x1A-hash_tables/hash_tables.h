#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of the hash table
 * @key: The key
 * @value: The value corresponding to the key
 * @next: A pointer to the nest node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
}	hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size The size of the array.
 * @array : an array of the size.
 * Each cell of this array is a pointer to the first node
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

unsigned long int hash_djb2(const unsigned char *str);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_print(const hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of a sorted hash table.
 * @key: The key.
 * @value: The value of the corresponding to a key.
 * @next: A pointer to the nest node of the list.
 * @sprev: A poonter to the previous element of the sorted linked list.
 * @snext: A pointer too the element of the sorted linked list
 */
typedef struct shah_node_s
{
	char *key;
	char *value;
	struct shash_node_s *sprev;
	struct shash_node_s *next;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - sorted hash table data structure
 * @size: The size of the array.
 * @array: An array of size
 * Each cell of this array is a pointer to yhe first node of a linked list.
 * @shead: A pointer to the firdt element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t *shead;
	shash_node_t **array;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif 
