#include "main.h"
/**
* print_sign - prints sign of number
* @n: the int to check
* Return: 1 and prints + if n>0
* -1 and prints - if n<0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
