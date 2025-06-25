#include <stdio.h>
#include "main.h"
/**
*print_array - print elements of an array
*
*@a: pointer of the array
*@n: number
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; ++i)
printf("*a[%u] = %d\n", i, a[i]);
}
