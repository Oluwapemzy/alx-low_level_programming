#include "main.h"
/**
 *binary_to_uint- converts a binary number to an unsigned int
 *@b: binary number
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val = 0;
unsigned int i, len = 0;
unsigned int currentPow, baseconvert = 1;
if (!b)
{
return (0);
}
while (b[len])
{
len++;
}
for (i = 0; i < len; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
currentPow = len - i - 1;
while (currentPow)
{
baseconvert = baseconvert * 2;
currentPow--;
}
dec_val += (b[i] - '0') * baseconvert;
baseconvert = 1;
}
return (dec_val);
}
