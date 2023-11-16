#include "shell.h"

/**
  * signl - Function that suspend or terminate program
  * @sign: num of signal
  * Return: void
 */
void signl(int sign)
{
	(void) sign;
	exit(EXIT_SUCCESS);
}
