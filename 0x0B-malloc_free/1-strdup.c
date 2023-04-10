#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string.
 * On failure, returns NULL.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str) + 1;
	char *dup = malloc(len);

	if (dup != NULL)
	{
		memcpy(dup, str, len);
	}

	return (dup);
}
