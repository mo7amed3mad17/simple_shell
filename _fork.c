#include "main.h"
/**
  * _fork - Function that creat new proccess
  * @parsed: Array of arguments
  * Return: void
 */
int _fork(char **parsed)
{
	int stat;
	pid_t new_p = fork();

	if (new_p == -1)
	{
		perror("Fork failed");
		exit(1);
	}
	else if (new_p > 0)
	{
		/*while (!WIFEXITED(stat) && !WIFSIGNALED(stat))*/
		waitpid(new_p, &stat, 0);
	}
	else if (new_p == 0)
	{
		execute_cmd(parsed);
	}
	return (1);
}
