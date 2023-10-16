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
 * _strcpy - Copies string from str1 to str2
 * @str1: the source
 * @str2: the destination
 *
 * Return: always (0)
 */
int *_strcpy(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != 0)
		i++;

	while (i >= 0)
	{
		str2[i] = str1[i];
		i--;
	}
	return (0);
}

/**
 * tok_count - counts the number of tokens
 * @str: the string to be tokenized
 * @delim: the delimeter
 *
 * Return: the number of tokens
 */
int tok_count(char *str, char *delim)
{
	int count = 0;
	char *temp = strtok(str, delim);

	while (temp != NULL)
	{
		count++;
		temp = strtok(NULL, delim);
	}

	return (count);
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
		write(1, &str[i], 1);
		i++;
	}
}
