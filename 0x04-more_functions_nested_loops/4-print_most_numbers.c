#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_most_numbers - prints number 0 to 9 except 2 & 4
*
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
}
