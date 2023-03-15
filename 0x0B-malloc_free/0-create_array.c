#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of size size and asaign char c
 *
 * @size: The size of the array to be created.
 * @c: The character with which the array will be initialized.
 *
 * Return: pointer to array, NULL if fail
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
