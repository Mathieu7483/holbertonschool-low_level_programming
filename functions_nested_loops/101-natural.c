#include <stdio.h>
/**
* main - point d'entree du programme
* return : 0 always acces
*/
int main()
{
int sum = 0;
int i = 1;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
i++;
{  
sum += i;
}
}
printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);
return (0);
}
