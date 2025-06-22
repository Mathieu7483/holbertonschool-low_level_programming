#include <stdio.h>
/**
* print_times_table - Prints the times table of the input,
*                     starting with 0.
*sum: The value of the times table to be printed.
 */

var multiples = function (n)
{
var sum = 0;
for (var i = 1; i < n; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
printf("%d\n",sum);
}
multiples(1024);
return(0);
}
