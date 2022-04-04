#include "main.h"
#include <string.h>
/**
 *_strncpy- copies src into dest by n integers
 *@dest: destination to copy to
 *@src: source to copy from
 *@n: amount of string from src to copy into dest
 *Return: return type char
 */
char *_strncpy(char *dest, char *src, int n)
{
dest = strncpy(dest, src, n);
return (dest);
}
