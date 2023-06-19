#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* _memset - capitalizes all characters of given string
*
* @s: memory (address) to be filled
* @b: the data to be filled
* @n: the first bytes of memory to be filled
*
* Return: pointer to memory area of S
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
