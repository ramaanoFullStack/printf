#include "main.h"

/**
 * print_c - start
 * @array_list: Store the a list of characters
 * Return: num of parameters printed
 */
int print_c(va_list array_list)
{
int c = va_arg(array_list, int);

return (_putchar(c));
}

/**
* print_s - start
* @array_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_s(va_list array_list)
{
int i, count = 0;
char *str;

str = va_arg(array_list, char *);
if (str == NULL)
str = "(null)";

for (i = 0; str[i]; i++)
count += _putchar(str[i]);

return (count);
}
