#include "main.h"
/**
* _strlen - return length of string
* @s: string to evaluate
* Return: length of string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
