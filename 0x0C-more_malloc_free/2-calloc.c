#include "main.h"
/**
 * memory_set - copies to memory a constant byte
 *
 * @str: the area in memory to be filled
 * @k: string to filled in memory
 * @n: count to fill the memory
 *
 * Return: poimter to s
 */

char *memory_set(char *str, char k, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		str[m] = k;
		m++;
	}

	return (str);

}

/**
 * _calloc - a function that allocates memory for an arry
 *
 * @nmemb: the array to be allocated memory
 * @size: size of the array
 *
 * Return: pointer to allocated memory and Null (fail)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	memory_set(pointer, 0, nmemb * size);

	return (pointer);
}
