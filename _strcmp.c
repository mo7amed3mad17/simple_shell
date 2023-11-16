#include "shell.h"

/**
 * _strcmp - Function that compare between 2 strings
 * @s1: input 1
 * @s2: input 2
 * Return: if (s1 == s2) 0, else return differnce
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);

		else if (s1[i] > s2[i])
			return (1);

		i++;
	}
	return (0);
}
