#include "calc.h"
#include <stddef.h>
/**
*get_op_func - 
*@s: string S
*Return: 
*/
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
int (*get_op_func(char *s))(int, int);
if (s != op_add ||s != op_div ||s != op_mod ||s!=op_mul || s!= op_sub)
return(NULL);