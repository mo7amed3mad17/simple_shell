#include "main.h"
/**
  * non_interactive - work when isatty =! 0
  * @argc: count
  * @argv: vector
  * Return: void
 */
void non_interactive(int argc, char **argv)
{
	char *read;
	char **parsed;
	int stat, c, r = 0;

	while (1)
	{
		read = read_input();
		parsed = parse_args(read);
		if (parsed[0] == NULL)
		{
			free(read);
			free(parsed);
			continue;
		}
		c = c_builtin(parsed);
		if (c >= 0)
		{
			cmd_builtin(read, parsed);
			free(read);
			free(parsed);
			continue;
		}
		stat = cmd_access(argv[0], parsed, r);
		if (stat == 0)
		{
			r++;
			free(read);
			free(parsed);
			continue;
		}
		stat = _fork(parsed);
		free(read);
		free(parsed);
	}
	(void) argc;
	(void) **argv;
}
