#include "shell.h"

/**
 *   * _strdup - function that duplicate string
 *     * @str: input str
 *       * Return: char*
 *        */
char *_strdup(char *str)
{
	int len;
	char *n_str;

	len = _strlen(str) + 1;
	n_str = malloc(len);
	if (n_str != NULL)
	{
		memcpy(n_str, str, len);
	}

	return (n_str);
}
