#include<stdio.h>
#include<main.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @b: constant byte
 * @n: the 1st bytes of memory to be filled
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(n, s, b);

	return (s);
}
