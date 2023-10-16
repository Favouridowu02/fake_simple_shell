#include "shell.h"

/**
 * _strlen - to calculate the string length
 * @str: the string to be passed
 *
 * Return: returns the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char *_strcpy(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != 0)
		i++;

	str2 = malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
		return (NULL);

	while (i >= 0)
	{
		str2[i] = str1[i];
		i--;
	}
	return (str2);
}


/**
 * favour_print - prints a set of character
 * @str: the string to be printed out
 *
 * Return: 0
 */

void favour_print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
