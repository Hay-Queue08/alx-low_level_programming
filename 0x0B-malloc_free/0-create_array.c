#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *		and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character with which the array will be initialized.
 *
 * Return: If size is zero or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
