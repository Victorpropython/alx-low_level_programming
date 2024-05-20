#include "hash_tables.h"
/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: string to generate hash value
 *
 * Return: return hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ptr;
	int c;

	ptr = 5381;
	while ((c = *str++))
	{
		ptr = ((ptr << 5) + ptr) + c; /* ptr * 33 + c */
	}
	return (ptr);
}
