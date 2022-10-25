#include "main.h"
/**
 * create_array - create an array of and initialize it with a specific value
 * @size: the desired size of the array
 * @c: the value with which the array should be initialized
 *
 * Return: NULL if size is 0 or memory allocation fails,
 * otherwise 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	s[i] = c;

return (s);
}
