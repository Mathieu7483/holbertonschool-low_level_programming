
char *create_array(unsigned int size, char c)
{
char *pointerarray;
unsigned int i;
pointerarray = malloc(sizeof(char) * size);
if (size == 0 || pointerarray == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
pointerarray[i] = c;
}
return (pointerarray);
}
