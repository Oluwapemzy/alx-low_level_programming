#include "main.h"
#include <string.h>
/**
 *_strstr-type char
 *@haystack:first parameter
 *@needle:second parameter
 *Return:returns result of using strstr
 */
char *_strstr(char *haystack, char *needle)
{
haystack = strstr(haystack, needle);
return (haystack);
}
