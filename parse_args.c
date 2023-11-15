#include "main.h"
/**
  * parse_args - Function that take the read line and tokenize it to parts
  * @read: The read line from standard input
  * Return: Array of Arrays (char **)
 */
char **parse_args(char *read)
{
	int buffsize = 256;
	int i = 0;
	char **parsed = malloc(buffsize * sizeof(char *));
	char delim [] = {" \n\t\r\a"};
	char *argument = NULL;

	if (!parsed)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	argument = strtok(read, delim);
	while (argument != NULL)
	{
		parsed[i] = argument;
		i++;
		argument = strtok(NULL, delim);
	}
	parsed[i] = NULL;
	return (parsed);
}
