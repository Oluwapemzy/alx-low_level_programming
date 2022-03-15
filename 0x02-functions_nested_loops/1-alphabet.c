#include "main.h"
/**
*print_alphabet - print alphabet
*Return: void.
*/
void print_alphabet(void)
{
char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;
while (alphabets[i] != 0)
{
_putchar(alphabets[i]);
i++;
}
}
