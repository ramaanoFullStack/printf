#include <unistd.h>

/**
 * _putchar - start program
 * @c: The character to print
 * Return: 1 on SUCCESS,
 *	   -1 on error and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
