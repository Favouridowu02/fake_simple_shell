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
