#include "main.h"

/**
* _printf - start program
* @format: array to print and check type
* Return: count of character printed
**/
int _printf(const char *format, ...)
{
int count = -1;

if (format != NULL)
{
int i;
va_list array_list;
int (*o)(va_list);

va_start(array_list, format);

if (format[0] == '%' && format[1] == '\0')
return (-1);

count = 0;

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i + 1] != '\0')
{
o = get_func(format[i + 1]);
count += (o ? o(array_list) : _putchar(format[i]) + _putchar(format[i + 1]));
i++;
}
}
else
count += _putchar(format[i]);
}
va_end(array_list);
}

return (count);
}
