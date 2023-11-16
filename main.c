#include "shell.h"
/**
  * main - Main Entry
  * @argc: count
  * @argv: vector
  * Return: 0 if success
 */
int main(int argc, char **argv)
{
	if (isatty(0))
	interactive(argc, argv);

	else
	non_interactive(argc, argv);

	(void) argc;
	(void) **argv;
	return (0);
}
