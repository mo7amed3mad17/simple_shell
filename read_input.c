#include "main.h"
/**
  * read_input - Function that read the input from user
  * Return: A string
 */
char *read_input(void)
{
	int n;
	char *read = NULL;
	size_t buffsize = 0;

	n = getline(&read, &buffsize, stdin);
	if (n == -1)
	{
		if (feof(stdin))
		{
			free(read);
			exit(EXIT_SUCCESS);
		}

		else
		{
			perror("getline error");
			free(read);
			exit(EXIT_FAILURE);
		}
	}

	return (read);
}
