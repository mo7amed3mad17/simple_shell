#include "main.h"
/**
  * c_builtin - check if builtin
  * @parsed: input
  * Return: 1 if yes
 */
int c_builtin(char **parsed)
{
	int i;

	if (_strcmp(parsed[0], "exit") == 0)
	{
		return (1);
	}

	for (i = 0; parsed[i] != NULL; i++)
	{
		if (_strcmp(parsed[i], "exit") == 0)
		return (1);
	}

	if (_strcmp(parsed[0], "env") == 0)
	return (0);

	else
	return (-1);
}
