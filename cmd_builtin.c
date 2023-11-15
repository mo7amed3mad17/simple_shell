#include "shell.h"
/**
  * cmd_builtin - Function that check if the command is builtin and execute it
  * @parsed: The Array of aruments
  * @read: buffer
  * Return: 1 if is not builtin
 */
void cmd_builtin(char *read, char **parsed)
{
	int i, j;
	(void) *read;

	if (_strcmp(parsed[0], "exit") == 0)
	{
		free(read);
		free(parsed);
		exit(0);
	}
	else if (_strcmp(parsed[0], "exit") != 0 && _strcmp(parsed[0], "env") != 0)
	{
		for (j = 0; parsed[j] != NULL; j++)
		{
			if (_strcmp(parsed[j], "exit") == 0)
			{
				free(read);
				free(parsed);
				exit(j);
			}
		}
	}
	else if (_strcmp(parsed[0], "env") == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);
	}
}
