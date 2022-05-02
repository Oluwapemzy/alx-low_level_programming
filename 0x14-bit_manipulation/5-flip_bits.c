#include "main.h"
/**
 *flip_bits-  flip to get from one number to another.
 *@n: flip from this
 *@m: flip to this
 *Return:  number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int t;
int i = 0;
t = n ^ m;
while (t >= 1)
{
if ((t & 1) == 1)
{
i++;
t >>= 1;
}
}
return (i);
}
