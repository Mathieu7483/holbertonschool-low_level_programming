#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
*get_op_func - 
*@s: string S
*Return: comparison 
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
int i;
for (i = 0; ops[i].op != NULL; i++)
{
if (*(ops[i].op) == *s && s[1] == '\0')
return (ops[i].f);
}
return (NULL);
}