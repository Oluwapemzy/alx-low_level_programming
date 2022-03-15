#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
int c = 0;
while (c < 10)
{
int i = 0;
while (alphabets[i] != 0)
{
_putchar(alphabets[i]);
i++;
}
c++;
}
}
