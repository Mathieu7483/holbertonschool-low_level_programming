#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
*get_op_func - function to get the operator
*@s: string S
*Return: comparison or NULL
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};
int i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s && s[1] == '\0')
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
