#include "main.h"
/**
*rev_string - print a string in mirror
*@s: string of character
*/
void rev_string(char *s)
{
char *reverse, temp;
reverse = s;
for (; *reverse; reverse++)
{
}
reverse--;
for (; s < reverse; s++)
{
temp = *reverse;
*reverse = *s;
*s = temp;
reverse--;
}
}
