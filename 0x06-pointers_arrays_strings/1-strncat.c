#include "main.h"
#include <string.h>
/**
 *_strncat-concat two strings given number of letters
 *@dest: destination
 *@src: source of concat
 *@n: number of string from src to concat
 *Return: char 
 */
char *_strncat(char *dest, char *src, int n)
{
dest = strncat(dest, src, n);
return (dest);
}
