#include <stdio.h>

int main(void)
{
int n, m, i;

for (n = 48; n < 58; n++)
for (m = n + 1; m < 58; m++)
for (i = m + 1; i < 58; i++)
{
putchar(n);
putchar(m);
putchar(i);

if (n != 55 || m != 56)
{
  putchar(',');
  putchar(' ');
}
}

putchar('\n');
return (0);
}


