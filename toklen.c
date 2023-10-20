#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "shell.h"
/**
 * getTokLen - gets how many tokens are in a string
 * @str: the string to work on
 * @delim: the delimeter to seperate the tokens with
 * Return: The length of the token
 */
size_t getTokLen(char *str, char *delim)
{
	size_t length = 0;
	char *token;

	token = strtok(str, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		length++;
	}
	return (length);
}
