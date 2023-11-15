#include "main.h"
/**
  * cmd_access - Function that check if the command is executable and exist
  * @parsed: The array of arguments
  * @argv: name of exe
  * @r: num of wrong cmd
  * Return: 0 if access
 */
int cmd_access(char *argv, char **parsed, int r)
{
	char *cmd_path = NULL, *path = NULL;
	char *path_copy = NULL, *path_parts = NULL;
	(void) r;

	if (access(parsed[0], F_OK) == 0)
	return (1);
	path = getenv("PATH");
	if (path == NULL)
	return (-1);
	path_copy = _strdup(path);
	path_parts = strtok(path_copy, ":");
	while (path_parts != NULL)
	{
	cmd_path = malloc((_strlen(path_parts) + 1
				+ _strlen(parsed[0]) + 1) * sizeof(char));
		if (cmd_path == NULL)
		{
			perror("malloc");
			free(path_copy);
			return (-1);
		}
		_strcpy(cmd_path, path_parts);
		_strcat(cmd_path, "/");
		_strcat(cmd_path, parsed[0]);
		if (access(cmd_path, F_OK) == 0)
		{
			free(cmd_path);
			free(path_copy);
			return (1);
		}
		free(cmd_path);
		path_parts = strtok(NULL, ":");
	}
		write(2, &argv[0], _strlen(&argv[0]));
		write(2, ": 1: ", 5);
		write(2, parsed[0], _strlen(parsed[0]));
		write(2, ": not found\n", 12);
		free(path_copy);
		return (0);
}
