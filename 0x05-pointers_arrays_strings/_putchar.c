#include <unistd.h>

/**
 * _putchar - writes charactrr c in stdout
 * @c: character to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
