#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
