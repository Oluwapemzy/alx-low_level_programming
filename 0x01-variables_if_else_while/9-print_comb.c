#include <stdio.h>
int main(void)
{
int i ='0';
while (i <= '9')
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}
putchar('\n');
return (0);
} 
