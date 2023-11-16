<<<<<<< HEAD
#include "main.h"

=======
#include "shell.h"
>>>>>>> 728d4da6d78fab980d19acb004e62acec47b4e9a
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
