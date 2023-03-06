#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strstr - function that locates a substring.
*
*@haystack: to check
*@needle: to check
*
* Return: p
*/
char *_strstr(char *haystack, char *needle)
{
char *p;
p = strstr(haystack, needle);
return (p);
}
