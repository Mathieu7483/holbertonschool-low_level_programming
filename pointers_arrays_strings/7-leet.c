#include "main.h"
/**
*leet - remplace des lettres pars des chiffres
*
*@str: string
*Return: leet
*/
char *leet(char *str)
{
char *r = str;
char lower[] = {'a', 'e', 'o', 't', 'l'};
char upper[] = {'A', 'E', 'O', 'T', 'L'};
char num[] = {'4', '3', '0', '7', '1'};
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == lower[j] || str[i] == upper[j])
{
str[i] = num[j];
break;
}
}
}
return (r);
}
