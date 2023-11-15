#include "shell.h"
/**
  * execute_cmd - The function that execute the command if it first
  * executable and exist in PATH
  * @parsed: The parsed arguments
  * Return: void
 */
void execute_cmd(char **parsed)
{
	char *cmd_path = NULL, *path_copy = NULL, *path = NULL, *path_parts = NULL;
	int exe;

	if (parsed[0][0] == '/' || parsed[0][0] == '.')
	{
		exe = execve(parsed[0], parsed, environ);
		if (exe == -1)
		{
			perror("execve");
			exit(1);
		}
		free(parsed);
	}
	else
	{
		path = getenv("PATH");
		if (path == NULL)
		exit(1);
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
				exit(1);
			}
			_strcpy(cmd_path, path_parts);
			_strcat(cmd_path, "/");
			_strcat(cmd_path, parsed[0]);
			exe = execve(cmd_path, parsed, environ);
			free(cmd_path);
			path_parts = strtok(NULL, ":");
		}
	}
	perror("execve");
	free(path_copy);
}
