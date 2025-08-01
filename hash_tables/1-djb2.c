#include "hash_tables.h"
/**
*hash_djb2 - function implementing the djb2 algorithm
*@str: pointer to a string which is a constant
*value unrepeated in the hash table
*Return: hash number
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
