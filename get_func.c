#include "main.h"

/**
* get_func - start program
* @s: array to check
* Return: return a function (if written correctly)
**/
int (*get_func(char s))(va_list)
{
op_t ops[] = {
{"c", print_c},
{"s", print_s},
{NULL, NULL}
};

int i;

for (i = 0; ops[i].c != NULL; i++)
{
if (*ops[i].c == s)
return (ops[i].f);
}
return (NULL);
}
